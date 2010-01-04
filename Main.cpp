#include "crypt.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <gtk/gtk.h>
#include "Thread.h"
#include <pcap.h>
#include <stdarg.h>
#include <map>
#include <stdio.h>
#include <mysql++/mysql++.h>
#include "consts.h"
#include "positiondrawer.h"
#define __BIG_ENDIAN_BITFIELD
#include "tcpchecksum.h"
#include <signal.h>
#ifndef WIN32
#include <execinfo.h>
#endif
//#include <linux/tcp.h>


using namespace std;
int mode;
bool waitingpong;
bool cracked;
int remainingpongs;
bool deb = true;
char ** args;
CCrypt * ClientCrypt;
CCrypt * ServerCrypt;
GtkWidget * servermessages;
GtkTextBuffer * servermessagesbuf;
GtkWidget * clientmessages;
GtkTextBuffer * clientmessagesbuf;
PositionDrawer * posd;
std::map<std::string,GtkTextTag*> servertags;
std::map<std::string,GtkTextTag*> clienttags;
  GtkWidget *sw1;GtkWidget *sw2;
playerinfo * pinfo;
// std::map<unsigned long long int,playerinfo*> players;
mysqlpp::Connection database;
struct ethernet_header{
  unsigned char dst[6];
  unsigned char src[6];
  unsigned short type;
};
#define IP_HL(ip)		(((ip).ip_vhl) & 0x0f)
#define IP_V(ip)		(((ip).ip_vhl) >> 4)
typedef unsigned short u16;
typedef unsigned long u32;



struct ip_header{
  u_char ip_vhl;		/* version << 4 | header length >> 2 */
  u_char ip_tos;		/* type of service */
  u_short ip_len;		/* total length */
  u_short ip_id;		/* identification */
  u_short ip_off;		/* fragment offset field */
#define IP_RF 0x8000		/* reserved fragment flag */
#define IP_DF 0x4000		/* dont fragment flag */
#define IP_MF 0x2000		/* more fragments flag */
#define IP_OFFMASK 0x1fff	/* mask for fragmenting bits */
  u_char ip_ttl;		/* time to live */
  u_char ip_p;		/* protocol */
  u_short ip_sum;		/* checksum */
  unsigned char ip_src[4];
  unsigned char ip_dst[4]; /* source and dest address */
};
struct tcp_header{
		u_short th_sport;	
		u_short th_dport;	
		unsigned int seq;		
		unsigned int th_ack;		

		u_char th_offx2;	
	#define TH_OFF(th)	(((th)->th_offx2 & 0xf0) >> 4)
		unsigned char cwr:1,
		ece:1,
		urg:1,
		ack:1,
		psh:1,
		rst:1,
		syn:1,
		fin:1;
	#define TH_FIN 0x01
	#define TH_SYN 0x02
	#define TH_RST 0x04
	#define TH_PUSH 0x08
	#define TH_ACK 0x10
	#define TH_URG 0x20
	#define TH_ECE 0x40
	#define TH_CWR 0x80
	#define TH_FLAGS (TH_FIN|TH_SYN|TH_RST|TH_ACK|TH_URG|TH_ECE|TH_CWR)
		u_short th_win;		
		u_short check;		
		u_short th_urp;		
};
//#define tcp_header tcphdr
u_short csum (unsigned short *buf, int nwords) { 
	unsigned long sum=0; 
  for( sum=0; nwords > 0; nwords-- ) 
                sum += *buf++; 
        sum = (sum >> 16) + (sum & 0xffff); 
        sum += (sum >> 16); 
  return (u_short)~sum; 
} 


long checksum(unsigned short *addr, unsigned int count) {
          /* Compute Internet Checksum for "count" bytes
            *         beginning at location "addr".
            */
       register long sum = 0;


        while( count > 1 )  {
           /*  This is the inner loop */
               sum += * addr++;
               count -= 2;
       }
           /*  Add left-over byte, if any */
       if( count > 0 )
               sum += * (unsigned char *) addr;

           /*  Fold 32-bit sum to 16 bits */
       while (sum>>16)
           sum = (sum & 0xffff) + (sum >> 16);

       return ~sum;
}
void signalcallback(int s)
{
  if ( s == SIGSEGV or s == SIGABRT )
  {
    error("Fatal error process received signal %i ( %s ), Backtrace:",s,signalname(s));
    #ifndef WIN32
    void *array[100];
    size_t size;
    size = backtrace(array, 100);
    char ** bt = backtrace_symbols(array, size);
    for ( int i = 0; i < size;i++)
    {
      error("#%i: %s",bt[i],i);
    }
    #endif
  }else{
    notice("Received signal %i ( %s )\n",s,signalname(s));
  }
  exit(0);
  
}
void scrollview(GtkWidget * tv)
{
  GtkAdjustment *vadj;
  
  vadj = gtk_scrolled_window_get_vadjustment(GTK_SCROLLED_WINDOW(tv));
  gtk_adjustment_set_value(vadj, vadj->upper);
  gtk_scrolled_window_set_vadjustment(GTK_SCROLLED_WINDOW(tv), vadj);
  
}
void servermessagefmt(std::string msg,...)
{
  return;
  GtkTextIter i;
  GtkTextIter i2;
  char msgF[4096];
  va_list args;
  va_start(args,msg);
  vsnprintf(msgF,4095,msg.c_str(),args);
  gdk_threads_enter ();
  gtk_text_buffer_get_end_iter(servermessagesbuf,&i);
  gtk_text_buffer_insert(servermessagesbuf,&i,msgF,strlen(msgF));
  int lcount = gtk_text_buffer_get_line_count(servermessagesbuf);
  
  if ( lcount - 10 > 0 )//Delete old lines to avoid crashes and excessive mem usage
  {
    GtkTextIter start;
    GtkTextIter end;
    gtk_text_buffer_get_start_iter(servermessagesbuf,&start);
    gtk_text_buffer_get_iter_at_line(servermessagesbuf,&end,lcount-10);
    gtk_text_buffer_delete(servermessagesbuf,&start,&end);
  }
  
  scrollview(sw1);
  gdk_threads_leave ();
  
}
void clientmessagefmt(std::string msg,...)
{
  return;
  GtkTextIter i;
  GtkTextIter i2;
  char msgF[4096];
  va_list args;
  va_start(args,msg);
  vsnprintf(msgF,4095,msg.c_str(),args);
  gdk_threads_enter ();
  gtk_text_buffer_get_end_iter(clientmessagesbuf,&i);
  gtk_text_buffer_insert(clientmessagesbuf,&i,msgF,strlen(msgF));
  int lcount = gtk_text_buffer_get_line_count(clientmessagesbuf);
  
  if ( lcount - 10 > 0 )//Delete old lines to avoid crashes and excessive mem usage
  {
    GtkTextIter start;
    GtkTextIter end;
    gtk_text_buffer_get_start_iter(clientmessagesbuf,&start);
    gtk_text_buffer_get_iter_at_line(clientmessagesbuf,&end,lcount-10);
    gtk_text_buffer_delete(clientmessagesbuf,&start,&end);
  }
  scrollview(sw2);
  
  gdk_threads_leave ();
  
}
void servermessagefmtcol(std::string msg,const char * fgcol,bool bold,bool italic,...)
{
  return;
  GtkTextIter i;
  GtkTextIter i2;

  char msgF[4096];
  va_list args;
  va_start(args,italic);
  vsnprintf(msgF,4095,msg.c_str(),args);
  gdk_threads_enter ();

  gtk_text_buffer_get_end_iter(servermessagesbuf,&i);
  if (not bold and not italic)
    gtk_text_buffer_insert_with_tags(servermessagesbuf,&i,msgF,strlen(msgF),servertags[fgcol],NULL);
  else if(not bold and italic)
    gtk_text_buffer_insert_with_tags(servermessagesbuf,&i,msgF,strlen(msgF),servertags[fgcol],servertags["italic"],NULL);
  else if ( bold and italic)
    gtk_text_buffer_insert_with_tags(servermessagesbuf,&i,msgF,strlen(msgF),servertags[fgcol],servertags["italic"],servertags["bold"],NULL);
  else if(not italic and bold)
    gtk_text_buffer_insert_with_tags(servermessagesbuf,&i,msgF,strlen(msgF),servertags[fgcol],servertags["bold"],NULL);
  int lcount = gtk_text_buffer_get_line_count(servermessagesbuf);
  
  if ( lcount - 10 > 0 )//Delete old lines to avoid crashes and excessive mem usage
  {
    GtkTextIter start;
    GtkTextIter end;
    gtk_text_buffer_get_start_iter(servermessagesbuf,&start);
    gtk_text_buffer_get_iter_at_line(servermessagesbuf,&end,lcount-10);
    gtk_text_buffer_delete(servermessagesbuf,&start,&end);
  }
  scrollview(sw1);
  
  gdk_threads_leave ();

}
void clientmessagefmtcol(std::string msg,std::string fgcol,bool bold,bool italic,...)
{
  return;
  GtkTextIter i;
  GtkTextIter i2;

  char msgF[4096];
  va_list args;
  va_start(args,italic);
  vsnprintf(msgF,4095,msg.c_str(),args);
  gdk_threads_enter ();
  
  gtk_text_buffer_get_end_iter(clientmessagesbuf,&i);
  if (not bold and not italic)
    gtk_text_buffer_insert_with_tags(clientmessagesbuf,&i,msgF,strlen(msgF),clienttags[fgcol],NULL);
  else if(not bold and italic)
    gtk_text_buffer_insert_with_tags(clientmessagesbuf,&i,msgF,strlen(msgF),clienttags[fgcol],servertags["italic"],NULL);
  else if ( bold and italic)
    gtk_text_buffer_insert_with_tags(clientmessagesbuf,&i,msgF,strlen(msgF),clienttags[fgcol],servertags["italic"],servertags["bold"],NULL);
  else if(not italic and bold)
    gtk_text_buffer_insert_with_tags(clientmessagesbuf,&i,msgF,strlen(msgF),clienttags[fgcol],servertags["bold"],NULL);
  int lcount = gtk_text_buffer_get_line_count(clientmessagesbuf);
  
  if ( lcount - 10 > 0 )//Delete old lines to avoid crashes and excessive mem usage
  {
    GtkTextIter start;
    GtkTextIter end;
    gtk_text_buffer_get_start_iter(clientmessagesbuf,&start);
    gtk_text_buffer_get_iter_at_line(clientmessagesbuf,&end,lcount-10);
    gtk_text_buffer_delete(clientmessagesbuf,&start,&end);
  }
  scrollview(sw2);
  gdk_threads_leave ();

}

  
std::string chr2hex(unsigned char * s,unsigned int len = -1)
{
  
  std::ostringstream buf;
  std::string s2;
  buf << std::hex;
  if ( s )
  {
    if ( len == -1 )
      s2.append((const char*)s);
    else
      s2.assign((const char*)s,0,len);
    for( int i = 0; i < s2.length(); i++)
      buf << ((unsigned short)s2.c_str()[i]%255);
  }
  return buf.str();
}
std::string chr2hex(std::string s,unsigned int len = -1)
{
  std::ostringstream buf;
  buf.setf(std::ios_base::hex,std::ios_base::basefield);
  buf << s;
  return buf.str();
}
void onclientpacket(ustring* data,CCrypt * clientcrypt,CCrypt * servercrypt);
void onserverpacket(ustring* data,CCrypt * clientcrypt,CCrypt * servercrypt);
void printkey(unsigned char * key,unsigned int len=40);
void printip(const unsigned char * rawip)
{
  printf("%i.%i.%i.%i\n",(int)rawip[0],(int)rawip[1],(int)rawip[2],(int)rawip[3]);
  
}
void sniffthread(void * iface)
{
  unsigned long serverlastseq = 0;
  unsigned long clientlastseq = 0;
  unsigned int serverip[4];
  unsigned int clientip[4];
  if ("select"== string((char*)iface))
  {
    printf("Inserire l'indirizzo ip del server di warcraft: ");
    scanf("%i.%i.%i.%i",&serverip[0],&serverip[1],&serverip[2],&serverip[3]);
    printf("Inserire l'indirizzo ip del computer sul quale è aperto warcraft: ");
    scanf("%i.%i.%i.%i",&clientip[0],&clientip[1],&clientip[2],&clientip[3]);
    
    
  }else{
    sscanf(args[2],"%i.%i.%i.%i",&serverip[0],&serverip[1],&serverip[2],&serverip[3]);
    sscanf(args[3],"%i.%i.%i.%i",&clientip[0],&clientip[1],&clientip[2],&clientip[3]);
  }
  int lastpayloadsize = -1;
  int clastpayloadsize = -1;
  map<unsigned int,ustring*> payloads;
  map<unsigned int,ustring*> cpayloads;
  cracked = false;
  mode = 0;
  pcap_t * handle;
  waitingpong = false;
  ClientCrypt = new CCrypt(6);
  ServerCrypt = new CCrypt(4);
  if ( ClientCrypt == NULL )
  {
    cout << "Fatal Error , clientcrypt not initialized" << endl;
    abort();
  }
  if ( ServerCrypt == NULL )
  {
    cout << "Fatal error , servercrypt not initialized" << endl;
    abort();
  }
  char * dev = (char*)iface;
  char * dev2 = NULL;
  char errbuf[PCAP_ERRBUF_SIZE];
  char filter_exp[] = "tcp port 8085";
  bpf_u_int32 mask;		/* The netmask of our sniffing device */
  bpf_u_int32 net;
  struct bpf_program fp;
  struct pcap_pkthdr header;	/* The header that pcap gives us */
  const u_char *packet;		/* The actual packet */
  struct ethernet_header eth_hdr;
  struct ip_header ip_hdr;
  struct tcp_header tcp_hdr;
  struct tcp_header tcp_hdr2;
  if (pcap_lookupnet(dev, &net, &mask, errbuf) == -1) {
	  cout << "Can't get netmask for device " << endl;
	  net = 0;
	  mask = 0;
  }
  if ("auto"== string(dev))
  {
    cout << "Uso il device predefinito" << endl;
    dev2 = pcap_lookupdev(errbuf);
  }else{
    dev2 = dev;
  }
  std::vector<string> ifaces;
  if ("select"== string(dev))
  {
    
    pcap_if_t *alldevs;
    pcap_if_t *d;
    if (pcap_findalldevs(&alldevs, errbuf) == -1)
    {
      cout << "Cannot find devices" << endl;
    }
    int i = 0;
    for(d=alldevs;d;d=d->next)
    {
      if (d != NULL)
      {
	cout << ifaces.size()<< ". " << d->name << endl;
	ifaces.push_back(string(d->name));
      }else{
	break;
      }
		
    }
    while (true)
    {
      int ch = 0;
      printf("Selezionare l'interfaccia: ");
      scanf("%i",&ch);
      if ( ch > -1 and ch < ifaces.size())
      {
	dev2 = (char*)ifaces[ch].c_str();
	break;
      }
    }
  }
    

  
  handle = pcap_open_live(dev2,BUFSIZ,1,1000,errbuf);
  if (not handle)
  {
    cout << "Apertura del device fallita: \"" << dev2 << "\" ("<< errbuf << ")" << endl;
    return;
  }else{
    cout << "Device aperto" << endl;
  }
  if ( not handle )
  {
    cout << "Impossibile iniziare lo sniffing: " << errbuf << endl;
  }
  if (pcap_compile(handle, &fp, filter_exp, 0, net) == -1) {
		 fprintf(stderr, "Couldn't parse filter %s: %s\n", filter_exp, pcap_geterr(handle));
		 return;
  }
  if (pcap_setfilter(handle, &fp) == -1) {
	  fprintf(stderr, "Couldn't install filter %s: %s\n", filter_exp, pcap_geterr(handle));
	  return;
  }
  ustring *payload;
  serverlastseq = 0;
  clientlastseq = 0;
  unsigned int servernextseq;
  unsigned int clientnextseq;
  bool serverfirstpacket = true;
  bool clientfirstpacket = true;
  while ( true )
  {
    packet = pcap_next(handle, &header);
    //cout << "Packet: " << header.len << endl;
    if (packet)
    {
      if (header.len > 14)
	memcpy(&eth_hdr,packet,sizeof(eth_hdr));
      else
	continue;
      memcpy(&ip_hdr,&packet[14],sizeof(ip_hdr));
      
      //printip(ip_hdr.ip_src);
      memcpy(&tcp_hdr,&packet[14+sizeof(ip_hdr)],sizeof(tcp_hdr));
      
      int headerlen = tcp_hdr.th_offx2 >> 2;//packet[14+sizeof(ip_hdr)+12] >> 2;
      printf("headerlen=%i\n",headerlen);
      payload = new ustring(&packet[14+sizeof(ip_hdr)+headerlen],header.len-(14+sizeof(ip_hdr)+headerlen));
      
      ustring *p2;
      //ustring *pseudoheader;
      p2 = new ustring();
      pseudoheader header2;
      memcpy(&header2.src_addr,ip_hdr.ip_src,4);
      memcpy(&header2.dest_addr,ip_hdr.ip_dst,4);
      header2.zero = 0;
      header2.protocol = 6;
      header2.length = htons(headerlen+payload->length());
      
      memcpy(&tcp_hdr2,&tcp_hdr,sizeof(tcp_hdr));
      tcp_hdr2.check = 0;
      
      


      
      /*if ( p2->length() % 2 != 0)
      {
	cout << "Adding padding byte" << endl;
	p2->appendrawdata((void*)"\x00",1);
      }*/
     // printf("%i\n",p2->length());
      unsigned short chksum = 0;
      //unsigned short * pseudohdrp =  (unsigned short *)&header2;
     // unsigned short * tcpheaderp =  (unsigned short *)&tcp_hdr2;
      unsigned char * tcpheaderptr = (unsigned char*)&packet[14+sizeof(ip_hdr)];
      unsigned char * newtcpheader = (unsigned char *)malloc(headerlen);
      memcpy(newtcpheader,tcpheaderptr,headerlen);//Copia l'header tcp originale dal pacchetto
      memcpy(newtcpheader,&tcp_hdr2,sizeof(tcp_hdr2));// Sovrascrive i byte iniziali del pacchetto con quelli modificati( col checksum a 0) 
      p2->appendrawdata(&header2,sizeof(header2));
      p2->appendrawdata(newtcpheader,headerlen);//Lo aggiunge al buffer
      p2->appendrawdata(payload->data(),payload->length());
      unsigned short * datap = (unsigned short *)p2->data();
      //printkey((unsigned char*)&header2,sizeof(header2));
      //chksum = ComputeChecksum(pseudohdrp,tcpheaderp,headerlen,datap,payload->length());
      bool padding = true;
      if (p2->length() % 2 != 0)// La lunghezza è dispari
      {
	p2->appendrawdata((void*)"\x00",1);
	padding = false;
      }
      #ifndef WIN32 // Maybe windoze automfuckingally drops bad checksum packets ?? O.o on wireshark it says validation disabled
      chksum = CheckSum((unsigned short*)p2->data(),p2->length());

      if ( chksum != tcp_hdr.check)
      {
	printf("Invalid packet( Wrong TCP checksum: dropping Got %04X , should be %04X)\n",chksum,tcp_hdr.check);
	servermessagefmtcol("Invalid packet( Wrong TCP checksum: dropping Got %04X , should be %04X )\n","red",true,false,chksum,tcp_hdr.check);
	if (payload)
	  delete payload;
	if (p2)
	  delete p2;
	if (newtcpheader)
	  free(newtcpheader);
	continue;
      }
      #endif
      if ( tcp_hdr.rst )
      {
	cout << "Connection closed" << endl;
	ClientCrypt->Reset();
	ServerCrypt->Reset();
	mode = 0;
      }
      #ifndef WIN32 //everything fails on windoze as always
      if ( tcp_hdr.psh)
      {
      
	  //printf("Last Seq: %lu TCP Seq: %lu\n",servernextseq,ntohl(tcp_hdr.seq));
	if ( payload->length() >  0)
	{
	  #endif
	  
	  //printf("Packet: Len: %i\n",payload->length());
	  if ((ip_hdr.ip_src[0] == clientip[0] && ip_hdr.ip_src[1] == clientip[1] && ip_hdr.ip_src[2] == clientip[2] && ip_hdr.ip_src[3] == clientip[3])&&(ip_hdr.ip_dst[0] == serverip[0] && ip_hdr.ip_dst[1] == serverip[1] && ip_hdr.ip_dst[2] == serverip[2] && ip_hdr.ip_dst[3] == serverip[3]) )
	  {
	    
	    //cout << "Client -> Server" << endl;
	   // printf("th_seq=%u\n",ntohl(tcp_hdr.seq));
	   if ( clientfirstpacket or clientnextseq == ntohl(tcp_hdr.seq))
	    {
	    //cout << "Server -> Client" << endl;
	   // printf("TCP Seq: %u\n",ntohl(tcp_hdr.th_ack));
	    
	     // printf("DIspatch normal\n");
	      if (payload->length() >= 6)
	      {
		onclientpacket(payload,ClientCrypt,ServerCrypt);
	      }
	      clastpayloadsize = payload->length();
	      clientlastseq = ntohl(tcp_hdr.seq);
	      if (clientfirstpacket)
		clientnextseq = ntohl(tcp_hdr.seq) + payload->length();
	      else
		clientnextseq += payload->length();
	      clientfirstpacket = false;
	      
	    }else{
	      cpayloads[ntohl(tcp_hdr.seq)] = new ustring(payload->data(),payload->length());
	      #ifdef WIN32
	      clientmessagefmtcol("TCP: previous segment lost(Got Seq %lu) excepted %lu\n","gray",true,false,ntohl(tcp_hdr.seq),clientnextseq);
	      #endif
		while(cpayloads.size() > 0)
		{
		  if (cpayloads.find(clientnextseq) != cpayloads.end())
		  {
		    #ifdef WIN32
		    clientmessagefmtcol("Sending old stored packet(%lu)\n","green",true,false,clientnextseq);
		    #endif
		    ustring *pl;
		    pl = cpayloads[clientnextseq];
		    cpayloads.erase(clientnextseq);
		    if (pl->length() >= 6)
		    {
		      onclientpacket(pl,ClientCrypt,ServerCrypt);
		    }
		    clastpayloadsize = pl->length();
		    clientlastseq = clientlastseq + clastpayloadsize ;
		    clientnextseq += pl->length();
		    delete pl;
		  }else{
		    printf("Client: No packet stored to send for seq %lu\n",clientnextseq);
		    
		    break;
		  }
		}
	    }
	    //onclientpacket(payload,ClientCrypt,ServerCrypt);
	  }else if((ip_hdr.ip_src[0] == serverip[0] && ip_hdr.ip_src[1] == serverip[1] && ip_hdr.ip_src[2] == serverip[2] && ip_hdr.ip_src[3] == serverip[3])&&(ip_hdr.ip_dst[0] == clientip[0] && ip_hdr.ip_dst[1] == clientip[1] && ip_hdr.ip_dst[2] == clientip[2] && ip_hdr.ip_dst[3] == clientip[3] ) ) {
	   // printf("SEQ=%lu\n",ntohl(tcp_hdr.seq));
	   /*#ifdef WIN32
	   payload->appendrawdata((void*)"      ",6);
	   #endif*/
	   if (ntohl(tcp_hdr.seq) < serverlastseq)
	   {
	     printf("Duplicate packet, dropping\n");
	    if (payload)
	      delete payload;
	    if (p2)
	      delete p2;
	    if (newtcpheader)
	      free(newtcpheader);
	    continue;
	   }
	    if ( serverfirstpacket or servernextseq == ntohl(tcp_hdr.seq))
	    {
	    //cout << "Server -> Client" << endl;
	   // printf("TCP Seq: %u\n",ntohl(tcp_hdr.th_ack));
	    
	     // printf("DIspatch normal\n");
	      if (payload->length() >= 4)
	      {
		onserverpacket(payload,ClientCrypt,ServerCrypt);
	      }
	      lastpayloadsize = payload->length();
	      serverlastseq = ntohl(tcp_hdr.seq);
	      if (serverfirstpacket)
		servernextseq = ntohl(tcp_hdr.seq) + payload->length();
	      else
		servernextseq += payload->length();
	      serverfirstpacket = false;
	      
	    }else{
	      payloads[ntohl(tcp_hdr.seq)] = new ustring(payload->data(),payload->length());
	      //servermessagefmtcol("TCP: previous segment lost(Got Seq %lu) excepted %lu\n","gray",true,false,ntohl(tcp_hdr.seq),servernextseq);
		while(payloads.size() > 0)
		{
		  if (payloads.find(servernextseq) != payloads.end())
		  {
		    //servermessagefmtcol("Sending old stored packet(%lu)\n","green",true,false,servernextseq);
		    ustring *pl;
		    pl = payloads[servernextseq];
		    payloads.erase(servernextseq);
		    if (pl->length() >= 4)
		    {
		      onserverpacket(pl,ClientCrypt,ServerCrypt);
		    }
		    lastpayloadsize = pl->length();
		    serverlastseq = serverlastseq + lastpayloadsize ;
		   /* #ifdef WIN32
		    servernextseq += 6; //lolz
		    #endif*/
		    servernextseq += pl->length();
		    delete pl;
		  }else{
		    printf("No packet stored to send for seq %lu\n",servernextseq);
		    
		    break;
		  }
		}
	    }
	      
	  }
	  
	#ifndef WIN32
	}else{
	
	}
	
      }
      #endif
      if (payload)
	delete payload;
      if (p2)
	delete p2;
      //cout << "Lunghezza reale: " << (*payload).length() << endl;
    }
  }
  
  return;
}
void printprogressbar(int p)
{
  printf("\r[");
  for (int x = 0; x < 100; x++)
  {
    if (x <= p )
      printf("=");
    else
      printf(" ");
  }
  printf("]");
  
  
}
void storeplayer(unsigned long long int guid,  ustring pname,unsigned int _class,unsigned int race,unsigned int gender);
int main(int argc,char ** argv)
{
  args = argv;
  #ifndef WIN32
  signal(SIGINT, signalcallback);
  signal(SIGTERM, signalcallback);
  signal(SIGHUP, signalcallback);
  signal(SIGSEGV, signalcallback);
  signal(SIGABRT,signalcallback);
  #endif
  printf("Loading players...");
  if ( not database.connect("wowsniffer","localhost","root","killbill"))
  {
    error("Cannot connect to mysql database: %s", database.error());
    return 1;
  }
  /*
  unsigned char* data;
  int s;
  FILE * f;
  std::vector<string> files;
  std::vector<string>::iterator it;
  #ifdef WIN32
  getdir("players\\",files);
  #else
  getdir("./players",files);
  #endif
  int its = 0;
  for(it = files.begin(); it != files.end(); it++)
  {
    char  ext[128];
    unsigned long long guid;
   playerinfo * pi;
   pi = (playerinfo*)malloc(sizeof(playerinfo));
   //cout << *it << endl;
   sscanf((*it).c_str(),"%lu.%s",&guid,ext);
   if (ext[0] != 'b' or ext[1] != 'i' or ext[2] != 'n')
     continue;
   const char * filename;
   
   #ifndef WIN32
   filename = strfmt("./players/%s",(*it).c_str()).c_str();
   
   #else
   filename = strfmt("players\\%s",(*it).c_str()).c_str();
   #endif
   f = fopen(filename,"r");
   if (!f)
   {
     cout << "Error opening "<<  filename << endl;
     continue;
   }
   fseek(f,0,SEEK_END);
   s = ftell(f);
   data = (unsigned char*)malloc(s);
   fseek(f,0,SEEK_SET);
   fread(data,s,1,f);
   fclose(f);
   ustring da2 = ustring(data,s);
   ustring n = da2.getfirst_c_str();
   pi->name = new ustring(n.data(),n.length());
   char fail;
   da2 >> fail; // TODO: This is caused by a bug on dispatch
   da2 >> pi->race;
   if (pi->race > 20 or pi->race < 0)
   {
     error("Invalid race on %s",(*it).c_str());
     continue;
   }
   da2 >> pi->gender;
   //da2 >> pi->_class;
   debug("SToring player to mysql");
   storeplayer(guid,*(pi->name),pi->_class,pi->race,pi->gender);
   free(data);
   its++;
   printprogressbar(int(float(its)/float(files.size())*100.0));
   
  }
  return 0;
  printf("\n");
  */
  pinfo = new playerinfo[1];
  pinfo->name = NULL;
  remainingpongs = 0;
  Thread *SniffTH;
  GtkWidget *window;
  GtkWidget *hbox1;
  GtkWidget *vbox1;
  GtkWidget *vbox2;

  g_thread_init (NULL);
  gdk_threads_init ();
  gdk_threads_enter ();
  gtk_init (&argc, &argv);
  window = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  hbox1 = gtk_hbox_new (FALSE, 0);vbox1 = gtk_vbox_new (FALSE, 0);vbox2 = gtk_vbox_new (FALSE, 0);
  gtk_container_add (GTK_CONTAINER (window), hbox1);
  g_signal_connect (G_OBJECT (window), "delete_event",
		      G_CALLBACK (exit), NULL);
  sw1 = gtk_scrolled_window_new (NULL, NULL);sw2 = gtk_scrolled_window_new (NULL, NULL);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (sw1),
                                    GTK_POLICY_AUTOMATIC, GTK_POLICY_ALWAYS);
  gtk_scrolled_window_set_policy (GTK_SCROLLED_WINDOW (sw2),
                                    GTK_POLICY_AUTOMATIC, GTK_POLICY_ALWAYS);
  servermessages = gtk_text_view_new();
  gtk_scrolled_window_add_with_viewport (
                   GTK_SCROLLED_WINDOW (sw1),servermessages);
		   
  clientmessages = gtk_text_view_new();
  gtk_scrolled_window_add_with_viewport (
                   GTK_SCROLLED_WINDOW (sw2),clientmessages);
  gtk_text_view_set_editable(GTK_TEXT_VIEW(servermessages),false);gtk_text_view_set_editable(GTK_TEXT_VIEW(clientmessages),false);
  servermessagesbuf = gtk_text_view_get_buffer(GTK_TEXT_VIEW(servermessages));
  clientmessagesbuf = gtk_text_view_get_buffer(GTK_TEXT_VIEW(clientmessages));
  clienttags["bold"] = gtk_text_buffer_create_tag(clientmessagesbuf,"bold","weight",PANGO_WEIGHT_BOLD,NULL);
 clienttags["italic"] =  gtk_text_buffer_create_tag(clientmessagesbuf,"italic","style",PANGO_STYLE_ITALIC,NULL);
 clienttags["red"] =  gtk_text_buffer_create_tag(clientmessagesbuf,"red","foreground","#ff0000",NULL);
 clienttags["green"] =  gtk_text_buffer_create_tag(clientmessagesbuf,"green","foreground","#00ff00",NULL);
 clienttags["blue"] =  gtk_text_buffer_create_tag(clientmessagesbuf,"blue","foreground","#0000ff",NULL);
 clienttags["yellow"] =  gtk_text_buffer_create_tag(clientmessagesbuf,"yellow","foreground","#ffff00",NULL);
 clienttags["cyan"] =  gtk_text_buffer_create_tag(clientmessagesbuf,"cyan","foreground","#00ffff",NULL);
 clienttags["magenta"] =  gtk_text_buffer_create_tag(clientmessagesbuf,"magenta","foreground","#ff00ff",NULL);
 clienttags["black"] =  gtk_text_buffer_create_tag(clientmessagesbuf,"black","foreground","#000000",NULL);
clienttags["gray"] =  gtk_text_buffer_create_tag(clientmessagesbuf,"gray","foreground","#888888",NULL);
 servertags["bold"] =  gtk_text_buffer_create_tag(servermessagesbuf,"bold","weight",PANGO_WEIGHT_BOLD,NULL);
 servertags["italic"] =  gtk_text_buffer_create_tag(servermessagesbuf,"italic","style",PANGO_STYLE_ITALIC,NULL);
servertags["red"] = gtk_text_buffer_create_tag(servermessagesbuf,"red","foreground","#ff0000",NULL);
 servertags["green"] =  gtk_text_buffer_create_tag(servermessagesbuf,"green","foreground","#00ff00",NULL);
 servertags["blue"] =  gtk_text_buffer_create_tag(servermessagesbuf,"blue","foreground","#0000ff",NULL);
 servertags["yellow"] =  gtk_text_buffer_create_tag(servermessagesbuf,"yellow","foreground","#ffff00",NULL);
 servertags["cyan"] =  gtk_text_buffer_create_tag(servermessagesbuf,"cyan","foreground","#00ffff",NULL);
 servertags["magenta"] =  gtk_text_buffer_create_tag(servermessagesbuf,"magenta","foreground","#ff00ff",NULL);
  servertags["black"] = gtk_text_buffer_create_tag(servermessagesbuf,"black","foreground","#000000",NULL);
 servertags["gray"] =  gtk_text_buffer_create_tag(servermessagesbuf,"gray","foreground","#888888",NULL);
  gtk_box_pack_start (GTK_BOX(vbox1),gtk_label_new ("Server"),false,true,4);
  gtk_box_pack_start (GTK_BOX(vbox1),sw1,true,true,4);
  gtk_box_pack_start (GTK_BOX(vbox2),gtk_label_new ("Client"),false,true,4);
  gtk_box_pack_start (GTK_BOX(vbox2),sw2,true,true,4);
  gtk_box_pack_start (GTK_BOX(hbox1),vbox1,true,true,4);
  gtk_box_pack_start (GTK_BOX(hbox1),vbox2,true,true,4);
  posd = new PositionDrawer(300,300);
  gtk_widget_set_size_request (window, 800,600);
  if ( argc == 4)
    SniffTH = new Thread((void* (*)(void*))sniffthread,(void*)argv[1]);
  else
    SniffTH = new Thread((void* (*)(void*))sniffthread,(void*)"select");
  gtk_widget_show_all (window);
  
  gtk_main();
  return 0;
  
}
