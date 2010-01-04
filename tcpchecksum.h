#ifndef TCPCHKSUM_H
#define TCPCHKSUM_H
#include <iostream>
#define GUINT16 unsigned short
#define guint32 unsigned int
#define PGUINT16 unsigned short*
#define pguint8 char*
#define guint8 char
typedef struct pseudoh {
    unsigned int src_addr;
    unsigned int dest_addr;
    char  zero;
    char  protocol;
    unsigned short length;
} pseudoheader, * ppseudoheader;
unsigned short ComputeChecksum(unsigned short* pseudo_hdr, unsigned short*  ptcp_hdr,unsigned int tcp_hdrsize, unsigned short* pdata, unsigned int dataSize);
typedef unsigned short u16;
typedef unsigned long u32;
#ifndef WIN32
typedef bool BOOL;
#endif
typedef bool BOOL_;
u16 tcp_sum_calc(u16 len_tcp, u16 src_addr[],u16 dest_addr[], BOOL_ padding, u16 buff[]);
unsigned short CheckSum(unsigned short *buffer, int size);
#endif