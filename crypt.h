#include <iostream.h>
#ifndef __CRYPT_H__
#define __CRYPT_H__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <netinet/in.h>

const int g_KEY_LENGTH      = 40;
const int g_CLIENT_MSG_SIZE = 6;
const int g_REALM_MSG_SIZE  = 4;
#define ustring std::string
/*class ustring{
  public:
    int llength;
    unsigned char* ptr;
    //bool allocated;
    ustring(const unsigned char * s, int l)
    {
      
      ptr = (unsigned char*)malloc(l*sizeof(unsigned char));
     // printf("Allocated ustring @ %p\n",ptr);
      memcpy(ptr,s,l);
      llength = l;
    }
    unsigned char* data()
    {
      
      
      return (unsigned char*)ptr;
    }
    unsigned char& operator[](int index)
    {
      return ptr[index];
    }
    unsigned int length()
    {
      return llength;
    }
  ~ustring()
  {
    if (ptr != NULL)
    {
      //printf("Deallocating ustring @ %p\n",ptr);
      free(ptr);
      ptr = NULL;
    }
  }
};*/


class CCrypt
{
private:
	bool	      m_haveAllKey;
	bool          m_haveKey[g_KEY_LENGTH];
	
	unsigned char m_plainText[g_KEY_LENGTH];
	unsigned char m_cryptText[g_KEY_LENGTH];
	bool m_firstByte;	
	int  m_count;
	int  m_msgLength;

	//Util
	void AddBytes(unsigned char* target, const unsigned char* source, 
			 	 int offset, int bytes, int rollover);
	void GetBytes(unsigned char* target, const unsigned char *source, 
				 int offset, int bytes, int rollover);
	int Mod(int index, int rollover = g_KEY_LENGTH);
	bool GotKeyBytes(int offset, int count);
	void SetFoundKey(int offset, int bytes);
	void GetKey(int bytes);
	void DecryptBytes(int bytes);
	void ShiftKey();

public:
	unsigned char m_Key[g_KEY_LENGTH];
	CCrypt(int msgLength);
	void Decrypt(ustring& buffer);
	bool HaveWholeKey() const;
	void Print(void* a);
	void Reset();
	bool operator==(const CCrypt& rhs);
	bool CrackFromPong(ustring& buffer, const CCrypt &crypt);
};

#endif //__CRYPT_H__