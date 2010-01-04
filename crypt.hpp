#include <string>
#ifndef __CRYPT_H__
#define __CRYPT_H__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#ifndef WIN32
#include <netinet/in.h>
#else
#include <winsock.h>
#endif
const int g_KEY_LENGTH      = 40;
const int g_CLIENT_MSG_SIZE = 6;
const int g_REALM_MSG_SIZE  = 4;
//#define ustring std::string
class ustring{
  public:
    int llength;
    unsigned char* ptr;
    bool decrypted;
    //bool allocated;
    ustring(void)
    {
      decrypted = false;
      llength = 0;
      ptr = NULL;
    }
    void dotypecast(void * destptr,unsigned int s)
    {
      if (llength < s )
      {
	std::cout << "Invalid use of operator >>: String has not enough size" << std::endl;
	throw "Invalid use of operator >>: String has not enough size";
      }
      memcpy(destptr,ptr,s);
      llength -= s;
      
      unsigned char * newptr = (unsigned char*)malloc(llength);
      memcpy(newptr,&ptr[s],llength);
      free(ptr);
      ptr = newptr;
    }
    void appendrawdata(void * srcptr,unsigned int s)
    {
      if (ptr)
	ptr = (unsigned char*)realloc(ptr,llength+s);
      else
	ptr = (unsigned char*)malloc(s);
      memcpy(&ptr[llength],srcptr,s);
      llength += s;
    }
    void clear(void)
    {
      if(ptr)
	free(ptr);
      ptr = NULL;
      llength = 0;
      
      
    }
    unsigned long long int readpackguid()
    {
       unsigned long long int guid = 0;

	char guidmark=0;
	(*this) >> guidmark;

	for(int i=0;i<8;i++)
	{
	    if(guidmark & ((unsigned char)(1) << i))
	    {
		unsigned char bit;
		(*this) >> bit;
		guid |= ((unsigned long long)(bit) << (i*8));
	    }
	}
	return guid;
    }
    ustring popdata(unsigned int s)
    {
      
      if (llength < s )
      {
	std::cout << "Invalid use of popdata: String has not enough size" << std::endl;
	throw "Invalid use of popdata: String has not enough size";
      }
      ustring res = ustring(ptr,s);
      llength -= s;
      //printf("Reallocating %i bytes\n",llength);
      if (llength > 0)
      {
	unsigned char * newptr = (unsigned char*)malloc(llength);
	
	memcpy(newptr,&ptr[s],llength);
	free(ptr);
	ptr = newptr;
      }else{
	free(ptr);
	ptr = NULL;
      }
      return res;
    }
   /* unsigned short getushort()
    {
      unsigned short res;
      if (llength < s )
      {
	std::cout << "Invalid use of operator >>: String has not enough size" << std::endl;
	abort();
      }
      memcpy(ptr,destptr,s);
      llength -= s;
      ptr = (unsigned char*)realloc((void*)(&ptr[s]),llength);
      
    }*/
    void operator<<(unsigned int x)
    {
      appendrawdata(&x,sizeof(x));
    }
    void operator<<(char x)
    {
      appendrawdata(&x,sizeof(x));
    }
    void operator<<(unsigned char x)
    {
      appendrawdata(&x,sizeof(x));
    }
    void operator<<(unsigned short x)
    {
      appendrawdata(&x,sizeof(x));
    }
    void operator=(ustring b)
    {
      if(ptr)
	free(ptr);
      ptr = (unsigned char*)malloc(b.length());
      decrypted = b.decrypted;
      memcpy(ptr,b.data(),b.length());
      llength = b.length();
      
    }
    void operator>>(unsigned short &x)
    {
      unsigned int s = sizeof(unsigned short);
      dotypecast((void*)(&x),s);
    }
    void operator>>(unsigned int &x)
    {
      unsigned int s = sizeof(unsigned int);
      dotypecast((void*)(&x),s);
    }
    void operator>>(int &x)
    {
      unsigned int s = sizeof(int);
      dotypecast((void*)(&x),s);
    }
    void operator>>(float &x)
    {
      unsigned int s = sizeof(float);
      dotypecast((void*)(&x),s);
    }
    /*void operator>>(short unsigned int &x)
    {
      unsigned int s = sizeof(short unsigned int);
      dotypecast((void*)(&x),s);
    }*/
    void operator>>(double &x)
    {
      unsigned int s = sizeof(double);
      dotypecast((void*)(&x),s);
      
    }
    void operator>>(char &x)
    {
      unsigned int s = sizeof(char);
      dotypecast((void*)(&x),s);
      
    }
    void operator>>(unsigned char &x)
    {
      unsigned int s = sizeof(unsigned char);
      dotypecast((void*)(&x),s);
      
    }
    void operator>>(unsigned long long int &x)
    {
      unsigned int s = sizeof(unsigned long long int);
      dotypecast((void*)(&x),s);
      
    }
    void operator>>(unsigned long int &x)
    {
      std::cout << "Warning: using long int can cause failure on 64-bits or 32-bits OSes" << std::endl;
      unsigned int s = sizeof(unsigned long int);
      dotypecast((void*)(&x),s);
      
    }
    ustring operator+(ustring b)
    {
      ustring res;
      unsigned char * data;
      if(ptr)
      {
      data = (unsigned char *)malloc(llength+b.length());
      memcpy(data,ptr,llength);
      memcpy(&data[llength],b.data(),b.length());
      res = ustring(data,llength+b.length());
      free(data);
      //llength = b.length()+llength;
      }else{
	res = ustring(b.data(),b.length());
      }
      res.decrypted = decrypted;
      return res;
      
    }
    ustring(const unsigned char * s, int l)
    {
      decrypted = false;
      ptr = (unsigned char*)malloc(l*sizeof(unsigned char));
     // printf("Allocated ustring @ %p\n",ptr);
      memcpy(ptr,s,l);
      llength = l;
      
    }
    void setdata(unsigned char * data,unsigned int l)
    {
      if (ptr)
	free(ptr);
      ptr = (unsigned char*)malloc(l*sizeof(unsigned char));
     // printf("Allocated ustring @ %p\n",ptr);
      memcpy(ptr,data,l);
      llength = l;
      
    }
    ustring getfirst_c_str()
    {
      int pos = -1;
      for(int i = 0; i < llength; i++)
      {
	if (ptr[i] == 0)
	{
	  pos = i;
	  break;
	}
      }
      if (pos == -1)
      {
	std::cout << "Error: cannot find null terminating char" << std::endl;
	throw "Error: cannot find null terminating char";
      }
      return popdata(pos+1);
      
    }
    
    
    unsigned char* data()
    {
      
      
      return (unsigned char*)ptr;
    }
    unsigned char& operator[](int index)
    {
      if ( index >= llength)
      {
	std::cout << "Error: invalid use of operator []: array index out of range(" << index << ")" << std::endl;
	throw "Error: invalid use of operator []: array index out of range";
      }
      return ptr[index];
    }
    unsigned int length()
    {
      return llength;
    }
    bool compare(unsigned char * data,unsigned int l)
    {
      
      for(int i = 0; i < l; i++)
      {
	if (data[i] != ptr[i%llength])
	  return false;
      }
      return true;
    }
    bool compare(ustring s2)
    {
      
      for(int i = 0; i < s2.length(); i++)
      {
	if (s2[i] != ptr[i%llength])
	  return false;
      }
      return true;
    }  
  ~ustring()
  {
    if (ptr)
    {
      //printf("Deallocating ustring @ %p\n",ptr);
      free(ptr);
      ptr = NULL;
    }
  }
};


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
	bool CrackFromPong(ustring& buffer, const CCrypt *crypt);
};

#endif //__CRYPT_H__