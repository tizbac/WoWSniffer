#include "tcpchecksum.h"
#ifndef WIN32
#include <netinet/in.h>
#else
#include <winsock.h>
#endif
unsigned short ComputeChecksum(unsigned short* pseudo_hdr, unsigned short*  ptcp_hdr,unsigned int tcp_hdrsize, unsigned short* pdata, unsigned int dataSize) {

  unsigned int checksum = 0;
  unsigned int nleft = 0;
  
  nleft = sizeof(pseudoh);
  while(nleft > 1) {
    /*  This is the inner loop */
    checksum = checksum + *(pseudo_hdr++);
    nleft = nleft - sizeof(unsigned short);
  }

  nleft = tcp_hdrsize;
  while(nleft > 1) {
    /*  This is the inner loop */
    checksum = checksum + *(ptcp_hdr++);
    nleft = nleft - sizeof(unsigned short);
  }

  nleft = dataSize;
  while(nleft > 1) {
    /*  This is the inner loop */
    checksum = checksum + *(pdata++);
    nleft = nleft - sizeof(unsigned short);
  }
  if(nleft)
    checksum = checksum + *((char*)pdata);
  /*  Fold 32-bit sum to 16 bits */
  checksum = (0xFFFF&(checksum >> 16)) + (checksum & 0xffff);
  checksum = (checksum & 0xffff) + (0xFFFF&(checksum >> 16));
  return (unsigned short)(~checksum);
}


u16 tcp_sum_calc(u16 len_tcp, u16 src_addr[],u16 dest_addr[], BOOL padding, u16 buff[])
{
u16 prot_tcp=6;
u16 padd=0;
u16 word16;
u32 sum;	
	
	int i = 0;
	// Find out if the length of data is even or odd number. If odd,
	// add a padding byte = 0 at the end of packet
	if (padding&1==1){
		padd=1;
		buff[len_tcp]=0;
	}
	
	//initialize sum to zero
	sum=0;
	
	// make 16 bit words out of every two adjacent 8 bit words and 
	// calculate the sum of all 16 vit words
	for (i=0;i<len_tcp+padd;i=i+2){
		word16 =((buff[i]<<8)&0xFF00)+(buff[i+1]&0xFF);
		sum = sum + (unsigned long)word16;
	}	
	// add the TCP pseudo header which contains:
	// the IP source and destinationn addresses,
	for (i=0;i<4;i=i+2){
		word16 =((src_addr[i]<<8)&0xFF00)+(src_addr[i+1]&0xFF);
		sum=sum+word16;	
	}
	for (i=0;i<4;i=i+2){
		word16 =((dest_addr[i]<<8)&0xFF00)+(dest_addr[i+1]&0xFF);
		sum=sum+word16; 	
	}
	// the protocol number and the length of the TCP packet
	sum = sum + prot_tcp + htons(len_tcp);

	// keep only the last 16 bits of the 32 bit calculated sum and add the carries
    	while (sum>>16)
		sum = (sum & 0xFFFF)+(sum >> 16);
		
	// Take the one's complement of sum
	sum = ~sum;

return ((unsigned short) sum);
}
unsigned short CheckSum(unsigned short *buffer, int size)
{
    unsigned long cksum=0;
    while(size >1)
    {
        cksum+=*buffer++;
        size -=sizeof(unsigned short);
    }
    if(size)
        cksum += *(unsigned char*)buffer;

    cksum = (cksum >> 16) + (cksum & 0xffff);
    cksum += (cksum >>16);
    return (unsigned short)(~cksum);
}
/*unsigned short TcpCheckSum(void* iph,void* tcph,char* data,int size,int ipsize,int tcpsize)
{
	tcph->Chksum=0;
	pseudoheader psd_header;
	psd_header.src_addr =iph->DstAddr;
	psd_header.dest_addr =iph->SrcAddr;
	psd_header.zero=0;
	psd_header.protocol=6;
	psd_header.m_tcpl=htons(tcpsize+size);

	char tcpBuf[65536];
	memcpy(tcpBuf,&psd_header,sizeof(PSD_HEADER));
	memcpy(tcpBuf+sizeof(PSD_HEADER),tcph,sizeof(TCP));
	memcpy(tcpBuf+sizeof(PSD_HEADER)+sizeof(TCP),data,size);
	return tcph->Chksum=CheckSum((USHORT *)tcpBuf,
		sizeof(PSD_HEADER)+sizeof(TCP)+size);
}*/

