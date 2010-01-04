#include "crypt.hpp"
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

CCrypt::CCrypt(int msgLength)
{
	m_msgLength = msgLength;
	Reset();
}

void CCrypt::Reset()
{
	m_count = 0;
	m_firstByte = true;
	m_haveAllKey = false;
	memset(&m_plainText, 0, sizeof(unsigned char) * g_KEY_LENGTH);
	memset(&m_cryptText, 0, sizeof(unsigned char) * g_KEY_LENGTH);
	memset(&m_Key,       0, sizeof(unsigned char) * g_KEY_LENGTH);
	memset(&m_haveKey,   0, sizeof(bool) * g_KEY_LENGTH);	                                
}	

void CCrypt::GetBytes(unsigned char* target, const unsigned char *source, 
					  int offset, int bytes, int rollover)
{
	int cCount = 0;
	while(cCount < bytes)
	{
		target[cCount] = source[offset];
		offset = ( offset + 1 ) % rollover;
		cCount++;
	}	
}

void CCrypt::AddBytes(unsigned char* target, const unsigned char* source, 
				 int offset, int bytes, int rollover)
{
	int cCount = 0;
	while(cCount < bytes)
	{
		target[offset] = source[cCount];
		offset = ( offset + 1 ) % rollover;
		cCount++;
	}
}

void CCrypt::Decrypt(ustring& buffer)
{
	AddBytes(m_cryptText, buffer.data(), m_count, 
		     m_msgLength, g_KEY_LENGTH);

	if(m_firstByte)
	{
		m_count = Mod(m_count + m_msgLength);
		m_firstByte = false;
		return;
	}

	if(GotKeyBytes(m_count,m_msgLength))
	{
		DecryptBytes(m_msgLength);
		// decode.
		unsigned char temp[100];
		for(int i = 0; i < m_msgLength; i++)
		{
			buffer[i] = m_plainText[Mod(m_count + i)];
		}
	}
	else if(!GotKeyBytes(m_count, 2))
	{
		// Add 2 bytes of the plain text using the length
		unsigned short len = htons(buffer.length() - 2);
		AddBytes(m_plainText, (const unsigned char*)&len, m_count, 
		     sizeof(unsigned short), g_KEY_LENGTH);
		GetKey(2);
		SetFoundKey(m_count, 2);
	}
	else
	{
		// Don't have the whole key and can't learn anything new
		// too bad :(
	}

	m_count = Mod(m_count + m_msgLength);
}

int CCrypt::Mod(int index, int rollover)
{
	if(index < 0)
		return index + rollover;
	else
		return index % rollover;
}

void CCrypt::Print(void* a)
{
	
}

bool CCrypt::GotKeyBytes(int offset, int count)
{
	while(count--)
	{
		if(m_haveKey[offset] == false)
			return false;
		offset = Mod(offset + 1);
	}

	return true;
}

void CCrypt::SetFoundKey(int offset, int bytes)
{
	while(bytes--)
	{
		m_haveKey[offset] = true;
		offset = Mod(offset + 1);
	}
	
	for(int i = 0; i < g_KEY_LENGTH; i++)
	{
		if(m_haveKey[i] == false)
			return;
	}
	m_haveAllKey = true;
}

void CCrypt::GetKey(int bytes)
{
	int i = m_count;
	while(bytes--)
	{
		int iMinusOne = Mod(i - 1);
		m_Key[i] = m_plainText[i] ^ ( m_cryptText[i] - m_cryptText[iMinusOne] );
		i = Mod(i + 1);
	}
}

void CCrypt::DecryptBytes(int bytes)
{
	int i = m_count;
	while(bytes--)
	{
		int iMinusOne = Mod(i - 1);
		m_plainText[i] = m_Key[i] ^ ( m_cryptText[i] - m_cryptText[iMinusOne] );
		i = Mod(i + 1);
	}
}

bool CCrypt::HaveWholeKey() const
{
	return m_haveAllKey;
}

void CCrypt::ShiftKey()
{
	m_Key[g_KEY_LENGTH - 1] = m_Key[0];
	for(int i = 1; i < g_KEY_LENGTH; i++)
	{
		m_Key[i-1] = m_Key[i];
	}
}

bool CCrypt::operator==(const CCrypt& rhs)
{
	for(int i = 0; i < g_KEY_LENGTH; i++)
	{
		bool bMatch = true;	
		for(int j = 0; j < g_KEY_LENGTH; j++)
		{
			if(m_Key[Mod(i + j)] != rhs.m_Key[j])
			{
				bMatch = false;
				break;
			}
		}

		if(bMatch)
			return true;
	}

	return false;
}

bool CCrypt::CrackFromPong(ustring& buffer, const CCrypt *crypt)
{
	Reset();
	// Push the crypt text
	AddBytes(m_cryptText, buffer.data(), m_count, 4, g_KEY_LENGTH);
	
	// Push the plain text. This is what the start of a pong packet looks like
	unsigned char temp[4] = {0x00, 0x06, 0xDD, 0x01};
	AddBytes(m_plainText, temp, m_count, 4, g_KEY_LENGTH);

	//Skip the first byte
	m_count++;
	this->GetKey(3);

	//Find our 3 bytes
	for(int i = 0; i < g_KEY_LENGTH; i++)
	{
		if( ( crypt->m_Key[Mod( i + 0 )] == m_Key[1] ) &&
		    ( crypt->m_Key[Mod( i + 1 )] == m_Key[2] ) &&
			( crypt->m_Key[Mod( i + 2 )] == m_Key[3] ))
		{
			// Found our spot in the key
			m_count = Mod(i + 3);
			
			// Copy key
			memcpy(m_Key, crypt->m_Key, g_KEY_LENGTH);
			memcpy(m_haveKey, crypt->m_haveKey, g_KEY_LENGTH);
			m_haveAllKey = true;
			m_firstByte = false;
			
			// Put the whole crypt text for this byte in the correct spot
			AddBytes(m_cryptText, buffer.data(), Mod(m_count - m_msgLength), 
					 m_msgLength, g_KEY_LENGTH);

			return true;
		}
	}

	//Print(screen);
	//crypt->Print(screen);

	return false;
}