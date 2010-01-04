#include <iostream>
#include <sstream>
#include <iomanip>
#include <map>
#include <mysql++/mysql++.h>
#include <cmath>
#include "crypt.hpp"
#include <pcap.h>
#include <stdio.h>
#include "opcodes.h"
#include "consts.h"
#include <zlib.h>
#include "Utility.h"
#include "positiondrawer.h"
std::map<unsigned long long int,float> lastplayersx;
std::map<unsigned long long int,float> lastplayersy;
std::map<unsigned long long int,double> lastplayerstime;
std::map<unsigned long long int,playerinfo*> pinfocache;
std::string getspellbyid(int spell);
using namespace std;
std::string chr2hex(unsigned char * s,unsigned int len = -1);
extern int mode;
std::string chr2hex(std::string s,unsigned int len = -1);
CCrypt *clientcrypt2;
extern playerinfo * pinfo;
extern bool waitingpong;
extern PositionDrawer * posd;
extern bool cracked;
extern int remainingpongs;
extern mysqlpp::Connection database;
void servermessagefmt(std::string msg,...);
void clientmessagefmt(std::string msg,...);
void servermessagefmtcol(std::string msg,const char * fgcol,bool bold,bool italic,...);
void clientmessagefmtcol(std::string msg,std::string fgcol,bool bold,bool italic,...);
std::string getlanguagename(unsigned int id);
std::string getchatmsgtype(unsigned int id);
float mpx,mpy,mpz;
void printkey(unsigned char * key,unsigned int len=40)
{
  for(int i = 0; i < len; i++)
    printf("%02X",key[i]);
  printf("\n");
  
}
void storeplayer(unsigned long long int guid,  ustring* pname,unsigned int _class,unsigned int race,unsigned int gender) 
{ 
  std::string query = strfmt("SELECT name FROM players WHERE guid = %llu",guid);
  mysqlpp::Query q = database.query(query);
  mysqlpp::StoreQueryResult res = q.store();
  if ( not res) {
    error("Query %s failed or returned empty set: %s",query.c_str(),q.error()); }
  else { 
    if ( res.num_rows() == 0) 
      { 
	query = strfmt("INSERT INTO players  (guid,name,class,race,gender) VALUES (%llu,'%s',%u,%u,%u);",guid,pname->data(),_class,race,gender);
      }else
      { 
	query = strfmt("UPDATE players SET class = %u,race= %u,gender=%u WHERE guid = %llu;",_class,race,gender,guid);
      }
      debug("DO Query: %s",query.c_str());
      mysqlpp::Query q2 = database.query(query); 
    q2.execute();
    debug("Error:%s",q2.error());
  }
  if (pinfocache.find(guid) != pinfocache.end())
  {
    delete pinfocache[guid]->name;
    delete pinfocache[guid];
    pinfocache.erase(guid);
  }
    
} 
playerinfo * getplayerbyguid(unsigned long long int guid)
{
  playerinfo * info;
  
  if (pinfocache.find(guid) == pinfocache.end())
  {
    std::string query;
    query = strfmt("SELECT name,race,class,gender FROM players WHERE guid = %llu LIMIT 1",guid);
    mysqlpp::Query q = database.query(query);
    mysqlpp::StoreQueryResult res = q.store();
    if ( (not res) or res.num_rows() == 0)
    {
      error("Query %s failed or returned empty set: %s",query.c_str(),q.error());
      info = new playerinfo[1];
      std::string guidstr = strfmt("{%llu}",guid);
      info->name = new ustring((const unsigned char*)guidstr.c_str(),guidstr.length()+1);
      info->race = 0;
      info->_class = 0;
      info->gender = 0;
    }else{
      info = new playerinfo[1];
      info->name = new ustring((const unsigned char*)res[0][0].c_str(),res[0][0].length()+1);
      info->race = res[0][1];
      info->_class = res[0][2];
      info->gender = res[0][3];
      
      
      
    }
    pinfocache[guid] = info;
  }
  
  return pinfocache[guid];
    
  
  
}
void handleupdateobject(ustring * data)
{
  /*
  unsigned int blockcount;
  char hasTransport;
  char updatetype;
  *data >> blockcount;
  *data >> hasTransport;
  for ( int i = 0; i < blockcount; i++)
  {
    *data >> updatetype;
    switch (updatetype)
    {
      case UPDATETYPE_OUT_OF_RANGE_OBJECTS:
	unsigned int count;
	*data >> count;
	for ( int i2 = 0; i2 < count; i2++)
	{
	  char unk1;
	  unsigned long long int guid;
	  *data >> unk1;
	  *data >> guid;
	  debug("UPDATE OBJECT: Guid %llu is now out of range",guid);
	  
	}
	break;
      case UPDATETYPE_VALUES:
	char unk1;
	unsigned long long int guid;
	char blockcount2;
	*data >> unk1;
	*data >> guid;
	*data >> blockcount2;
	bool * bits = new bool[blockcount2*sizeof(unsigned int)*8];
	for ( int i2 = 0; i2 < blockcount2; i2++)
	{
	  unsigned int mask;
	  *data >> mask;
	  for ( int i3 = 0; i3 < sizeof(unsigned int); i3++)
	  {
	    bool bit = ( mask >> i3 ) & 1;
	    bits[i2*sizeof(unsigned int)+i3] = bit;
	    
	  }
	  
	}
	unsigned int valuescount = 32*blockcount2-31;
	unsigned int * values = new unsigned int[valuescount];
	for ( int i2 = 0; i2 < valuescount; i2++)
	{
	  *data >> values[i2];
	  
	  
	}
	break;
      case UPDATETYPE_MOVEMENT:
	unsigned long long int guid;
	unsigned char flags;
	unsigned int flags2;
	unsigned int MStime;
	char unk2;
	float x,y,z,o;
	*data >> guid;
	*data >> flags;
	if ( flags & UPDATEFLAG_LIVING)
	{
	  
	  *data >> flags2;
	  *data >> unk2;
	  *data >> MStime;
	}
	if ( flags & UPDATEFLAG_HAS_POSITION )
	{
	  *data >> x;
	  *data >> y;
	  *data >> z;
	  *data >> o;
	}
	if(flags & UPDATEFLAG_LIVING)
	{
        // 0x00000200
	  if(flags2 & MOVEMENTFLAG_ONTRANSPORT)
	  {
	    data->popdata(28);
	    
	  }
	   if(flags2 & (MOVEMENTFLAG_SWIMMING | MOVEMENTFLAG_FLYING2))
	  {
	    float pitch = 0.0;
	    *data >> pitch;
	    
	  }
	  int lastfalltime;
	  *data >> lastfalltime;
	  
	}
	if(flags2 & MOVEMENTFLAG_JUMPING)
	{
	  data->popdata(16);
	  
	  
	}
	float movementspeeds[8];
	data->dotypecast(movementspeeds,sizeof(float)*8);
	
      
    }
    
  }
  IMPLEMENTATION NOT FINISHED YET
  */ 
}
void handleserverpacket(ustring *data,unsigned short opcode,unsigned int len)
{
  try{
   /* if (opcode == SMSG_ATTACKERSTATEUPDATE)
    {
      unsigned int hitinfo;
      unsigned long long int attackerguid;
      unsigned long long int victimguid;
      unsigned int damage;
      unsigned int blocked;
      unsigned int unk1;
      unsigned int unk2;
      unsigned char swingtype;
      unsigned int schoolmask;unsigned int targetstate;
      float damage2;unsigned int damage3;unsigned int absorbed;unsigned int resisted;
      try{
      *data >> hitinfo;
      *data >> attackerguid;
      *data >> victimguid;
      //data->dotypecast(&attackerguid,7);
      //data->dotypecast(&victimguid,7);
      *data >> damage;
      *data >> swingtype;
      *data >> schoolmask;
      *data >> damage2;
      *data >> damage3;
      *data >> absorbed;
      *data >> resisted;
      *data >> targetstate;
      *data >> unk1;
      *data >> unk2;
      *data >> blocked;}catch(const char * error)
      {
	servermessagefmtcol("Error while parsing packet: %s\n","red",true,false,error);
	
	
      }
      servermessagefmtcol("%lu's %i swing hits %lu for %i damage\n","blue",true,false,attackerguid,swingtype,victimguid,damage);
    }else */
   if (opcode == SMSG_GUILD_ROSTER)
   {
     FILE * roster = fopen("./guildroster.bin","wb");
     fwrite(data->data(),1,data->length(),roster);
     fclose(roster);
     servermessagefmtcol("GUILD ROSTER DUMPATO\n","green",true,false);
     
     
     
     
   }
   if(opcode == SMSG_COMPRESSED_UPDATE_OBJECT)
   {
     char * buffer = new char[1024*32];
     z_stream s;
     s.zalloc = NULL;
     s.zfree = NULL;
     s.opaque = (voidpf)0;
     s.next_in = data->data();
     s.avail_in = data->length();
     s.next_out = (Bytef*)buffer;
     s.avail_out = 1024*32;
     inflateInit(&s);
     inflate(&s,Z_FINISH);
     ustring * data2 = new ustring((const unsigned char *)buffer,1024*32-s.avail_out);
     delete buffer;
     handleupdateobject(data2);
     
   }
   if(opcode == SMSG_MESSAGECHAT)
    {
      unsigned char type;
      unsigned int language;
      unsigned long long int guid;
      unsigned long long int targetguid;unsigned long long int targetguid2;
      unsigned long long int speakerguid;
      unsigned int unk1;
      unsigned int speakernamelen;
      ustring* speakername;
      ustring* message;
      ustring channelname;
      unsigned int msglen;
      unsigned long long int listener;
      *data >> type;
      *data >> language;
      message = new ustring();speakername = new ustring();
      switch(type)
      {
	  case CHAT_MSG_MONSTER_SAY:
	  case CHAT_MSG_MONSTER_PARTY:
	  case CHAT_MSG_MONSTER_YELL:
	  case CHAT_MSG_MONSTER_WHISPER:
	  case CHAT_MSG_MONSTER_EMOTE:
	  case CHAT_MSG_RAID_BOSS_WHISPER:
	  case CHAT_MSG_RAID_BOSS_EMOTE:
	  {
	      *data >> speakerguid;
	      *data >> unk1;                             // 2.1.0
	      *data >> speakernamelen;
	      *speakername = data->popdata(speakernamelen);
	      speakername->appendrawdata((void*)"\x00",1);
	      *data >> listener;
	      *data >> msglen;
	      *message = data->popdata(msglen);
	      message->appendrawdata((void*)"\x00",1);
	      data->popdata(1);
	      servermessagefmtcol("[%s][%s][%s]: %s\n","yellow",true,false,getlanguagename(language).c_str(),getchatmsgtype(type).c_str(),speakername->data(),message->data());
	      return;
	      break;
	  }
      }
     
	
      *data >> guid;
      *data >> unk1;
       if (type == CHAT_MSG_CHANNEL )
      {
	channelname = data->getfirst_c_str();
	
      }
      //*data >> targetguid2;
      *data >> targetguid;
      *data >> msglen;
      
      *message = data->popdata(data->length()-1);
      char x[1];
      x[0] = 0;
      message->appendrawdata((void*)x,1);
      //string msgstr;
      //msgstr.assign((const char*)message.data(),0,message.length());
      
      printf("%s\n",getchatmsgtype(type).c_str());
      printkey(message->data(),message->length());
      if (language != LANG_ADDON )
      {
	
	if (type == CHAT_MSG_CHANNEL )
	{
	  if (not channelname.compare((unsigned char*)"Crb",3))
	    servermessagefmtcol("#%s","cyan",true,false,channelname.data());
	}
      servermessagefmtcol("[%s]","black",true,false,getlanguagename(language).c_str());
      servermessagefmtcol("[%s]","gray",true,false,getchatmsgtype(type).c_str());
      servermessagefmtcol("[%s]: ","blue",true,false,getplayerbyguid(guid)->name->data());
      servermessagefmtcol("%s\n","black",true,false,message->data());
      }

      if(message)
	delete message;
      if(speakername)
	delete speakername;
      
      
    }else if(opcode == SMSG_NAME_QUERY_RESPONSE )
    {
      ustring* playername;
      unsigned long long guid;
      unsigned int race;unsigned char  unk1;
      unsigned int _class;
      unsigned int gender;
      *data >> guid;
      playername = new ustring(data->getfirst_c_str());
     *data >> unk1;
     *data >> race;
     *data >> gender;
     *data >> _class;
      playername->appendrawdata((void*)"\x00",1);
      
      servermessagefmt("Guid %lu is %s (%i)\n",guid,playername->data(),playername->length());
      //FILE * f;
      /*ustring playerdata;
      playerdata.appendrawdata(playername.data(),playername.length());
      playerdata << race;
      playerdata << gender;
      playerdata << _class;
      if ( players.find(guid) != players.end())
      {
	playerinfo * ptr;
	delete players[guid]->name;
	ptr = players[guid];
	players.erase(guid);
	
	
	free(ptr);
	
      }
      playerinfo * pi;
      pi = (playerinfo*)malloc(sizeof(playerinfo));
      pi->name = new ustring(playername.data(),playername.length());
      pi->race = race;
      pi->gender = gender;
      pi->_class = _class;
      players[guid] = pi;
      f = fopen(strfmt("players/%lu.bin",guid).c_str(),"w");
      fwrite(playerdata.data(),playerdata.length(),1,f);
      fclose(f);*/
      storeplayer(guid,playername,_class,race,gender);
      delete playername;
      
    }else if (opcode == MSG_RANDOM_ROLL )
    {
      unsigned int min_;
      unsigned int max_;
      unsigned int roll;
      unsigned long long guid;
      *data >> min_;
      *data >> max_;
      *data >> roll;
      *data >> guid;
      servermessagefmt("%s rolls %u (%u-%u)\n",getplayerbyguid(guid)->name->data(),roll,min_,max_);
      
    }else if (opcode == MSG_MOVE_START_FORWARD or 
      MSG_MOVE_START_BACKWARD == opcode or 
      opcode == MSG_MOVE_STOP or 
      opcode == MSG_MOVE_HEARTBEAT or
      opcode == MSG_MOVE_JUMP or
      opcode == MSG_MOVE_FALL_LAND or
      opcode == MSG_MOVE_START_STRAFE_LEFT or
      opcode == MSG_MOVE_STOP_STRAFE or
      opcode == MSG_MOVE_START_TURN_LEFT  or
      opcode == MSG_MOVE_START_TURN_RIGHT or
      opcode == MSG_MOVE_STOP_TURN or
      opcode == MSG_MOVE_START_PITCH_UP  or
      opcode == MSG_MOVE_START_PITCH_DOWN or
      opcode == MSG_MOVE_STOP_PITCH  or
      opcode == MSG_MOVE_SET_RUN_MODE or opcode == MSG_MOVE_SET_WALK_MODE
      )
    {
      float x,y,z,o;
      unsigned long long guid;
      unsigned int time,flags;
      unsigned char unk1;
      guid = data->readpackguid();
      *data >> flags;
      *data >> unk1;
      *data >> time;
      *data >> x;*data >> y;*data >> z;*data >> o;
      
      //servermessagefmt("%s : Moves to %f %f %f\n",getplayerbyguid(guid)->name->data(),x,y,z);
      if ( lastplayersx.find(guid) != lastplayersx.end())
      {
	double stime = getcurrenttime();
	double movelen = sqrt((x-lastplayersx[guid])*(x-lastplayersx[guid])+(y-lastplayersy[guid])*(y-lastplayersy[guid]));
	double lptime = lastplayerstime[guid];
	double speed = (movelen / ( stime - lptime));
	if ( speed > 10.0 )
	{
	  //servermessagefmt("%s is speedhacking ( %f > 10.0): Speed detected: %f%%\n",getplayerbyguid(guid)->name->data(),speed,(speed)/6.6*100.0);
	
	
	}
      }
      lastplayersx[guid] = x;
      lastplayersy[guid] = y;
      lastplayerstime[guid] = getcurrenttime();
      posd->UpdatePlayer(guid,x,y,z,o);
      
      float dist;
      dist = sqrt((x-mpx)*(x-mpx)+(y-mpy)*(y-mpy)+(z-mpz)*(z-mpz));
      
      if (dist < 20.0)
      {
	servermessagefmt("%s si sta muovendo vicino a te( Distanza: %f)\n",getplayerbyguid(guid)->name->data(),dist);
      }
    }
      
  }catch(char const* a)
  {
    servermessagefmtcol("Error while unpacking package: %s\n","red",true,false,a);
  }
  
}
  
void handleclientpacket(ustring *data,unsigned int opcode,unsigned int len)
{
  unsigned int spell;
  unsigned char count;
  unsigned long long int guid;
  unsigned int uint_flags;
  unsigned int time;
  unsigned int type;
  unsigned int lang;
  std::string msg;
  switch (opcode)
    {
      case CMSG_PING:
	remainingpongs = 10;
	break;
      case CMSG_CAST_SPELL:

	*data >> spell;
	*data >> count;
	clientmessagefmt("Cast: <%s> (%i)\n",getspellbyid(spell).c_str(),(int)count);
	break;
      case CMSG_CANCEL_AURA:
	*data >> spell;
	clientmessagefmt("Cancel Aura: <%s>\n",getspellbyid(spell).c_str());
	break;
      case CMSG_NAME_QUERY:
	*data >> guid;
	clientmessagefmt("Query name of GUID %lu\n",guid);
	break;
      case CMSG_MESSAGECHAT:
	*data >> type;
	*data >> lang;
	msg.clear();
	msg.assign((const char*)data->data(),0,data->length());
	clientmessagefmt("Invio: [%s][%s]: %s\n",getlanguagename(lang).c_str(),getchatmsgtype(type).c_str(),msg.c_str());
	break;
      case CMSG_SET_SELECTION:
	*data >> guid;
	posd->selected = guid;
	clientmessagefmtcol("Selezionato :","blue",false,false);
	clientmessagefmtcol(" <%s> \n","cyan",true,false,getplayerbyguid(guid)->name->data());
	
    }
  if (opcode == MSG_MOVE_START_FORWARD or 
      MSG_MOVE_START_BACKWARD == opcode or 
      opcode == MSG_MOVE_STOP or 
      opcode == MSG_MOVE_HEARTBEAT or
      opcode == MSG_MOVE_JUMP or
      opcode == MSG_MOVE_FALL_LAND or
      opcode == MSG_MOVE_START_STRAFE_LEFT or
      opcode == MSG_MOVE_STOP_STRAFE or
      opcode == MSG_MOVE_START_TURN_LEFT  or
      opcode == MSG_MOVE_START_TURN_RIGHT or
      opcode == MSG_MOVE_STOP_TURN or opcode== MSG_MOVE_SET_FACING or
      opcode == MSG_MOVE_START_PITCH_UP  or
      opcode == MSG_MOVE_START_PITCH_DOWN or
      opcode == MSG_MOVE_STOP_PITCH  or
      opcode == MSG_MOVE_SET_RUN_MODE or opcode == MSG_MOVE_SET_WALK_MODE
      )
  {
    unsigned char unk1;
    float x,y,z,o;
    *data >> uint_flags;
    
    *data >> unk1;
    *data >> time;
    *data >> x;
    *data >> y;
    *data >> z;
    *data >> o;
    mpx = x;mpy=y;mpz=z;
    //clientmessagefmt("Client: %s : Posizione(%f,%f,%f) , Orientamento %f\n",getopcodebycode(opcode).c_str(),x,y,z,o);
    posd->SetMyPosition(x,y,z,o);
  }
}
void onclientpacket(ustring *data,CCrypt * clientcrypt,CCrypt * servercrypt)
{
  
  static unsigned int opcode = 0;
  static unsigned short plen2= 0;
  
  static ustring buffer;
 // bool needmoredata = false;
    ustring d2;
   
    if(mode == 2)
    {
      buffer = buffer + ustring(data->data(),data->length());
      printf("%i\n",buffer.decrypted);
      while (buffer.length() > 0)
      {
	if (not buffer.decrypted)
	{
	  //
	  if (buffer.length() >= 6)
	  {
	    clientcrypt->Decrypt(buffer);
	  
	  buffer >> plen2;
	  buffer >> opcode;
	  }
	  cout << "Decrypt buffer: Got len "<< ntohs(plen2) << endl;
	  buffer.decrypted = true;
	}
	if (ntohs(plen2)-4 < 0)
	  return;
	//memcpy(&plen,buffer.data(),sizeof(unsigned short));
	cout << "Waiting for " << buffer.length() << "/" << ntohs(plen2)-4<< " Bytes (client)" << endl;
	if ( getopcodebycode(opcode) == "" or ntohs(plen2) > 5000 /*packey WAY too long*/ )
	    {
	      clientmessagefmt("Errore di decrittazione, la cifratura verrà resettata\n");
	      cout << "Client: Decrittazione fallita, reset" << endl;
	      clientcrypt->Reset();
	      mode = 0;
	      waitingpong = false;
	      buffer.clear();
	      d2.clear();
	      return;
	    }
	if( buffer.length() >= ntohs(plen2)-4 )
	{
	  cout << "Moving " << ntohs(plen2)-4 << "Bytes to d2" << endl;
	  d2 = buffer.popdata(ntohs(plen2)-4);
	  buffer.decrypted = false;

	    
	    //printkey(d2.data(),d2.length());
	    cout <<"Client: "<< ntohs(plen2) <<" | | " << getopcodebycode(opcode) << endl;
	    //clientmessagefmt("Pacchetto: Lunghezza %i Byte, Opcode: %s\n",ntohs(plen2),getopcodebycode(opcode).c_str());
	    handleclientpacket(&d2,opcode,ntohs(plen2));

	}else{
	  buffer.decrypted = true;
	  return; // Aspetta + dati
	}
      }
      }else{
	buffer = ustring(data->data(),data->length());
	clientcrypt->Decrypt(buffer);
	buffer >> plen2;
	buffer.clear();
	
      }
    //
    static ustring lastkey;
      if ( clientcrypt == NULL )
      {
	cout << "Fatal Error , clientcrypt not initialized" << endl;
	abort();
      }
    // printkey(d2.data(),d2.length());
      switch (mode)
      {
	case 0:

	  if (clientcrypt->HaveWholeKey() && mode == 0)
	  {
	    cout << "Got client key once" << endl;
	    printkey(clientcrypt->m_Key);
	    lastkey.setdata(clientcrypt->m_Key,40);
	  // clientcrypt->Reset();
	    mode = 2;
	    buffer.decrypted = false;
	    buffer.clear();
	    return;
	    clientcrypt2 = new CCrypt(6);
	    
	  }
	  break;
	case 1:

	  if (clientcrypt2->HaveWholeKey())
	  {
	    if( lastkey.compare(clientcrypt2->m_Key,40))
	    {
	      mode = 2;
	      cout << "Got client key twice, switching to status 2!" << endl;
	      return;
	    }else{
	      cout << "No match, reset" << endl;
	      lastkey.setdata((unsigned char*)"\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",40);
	      clientcrypt->Reset();
	      delete clientcrypt2;
	      mode = 0;
	    }
	  }
	  break;

      };
      //printkey(d2.data(),d2.length());
      
  
 printf("%i\n",buffer.decrypted);

}
void onserverpacket(ustring* data,CCrypt * clientcrypt,CCrypt * servercrypt)
{
  static unsigned short opcode = 0;
  static unsigned short plen2;
  static bool done;
  static ustring buffer;
  static bool lpd;
  static ustring d2;

  if ( remainingpongs && not cracked)
  {
    buffer = ustring(data->data(),data->length());
    cout << "trying to crack from pong..("<< buffer.length() << ")" << endl;
    servermessagefmt("Tentativo di crack con il pacchetto pong (%i)...",10-remainingpongs);
    if( servercrypt->CrackFromPong(buffer,clientcrypt))
    {
      servermessagefmt("Successo!\n");
      cout << "Crack succesful" << endl;
      cracked = true;
      buffer.popdata(8);
      buffer.decrypted= false;
      remainingpongs = 0;
      return;
    }else{
      cout << "No pong :(" << endl;
      servermessagefmt("Fallito\n");
      servercrypt->Reset();
      remainingpongs -= 1;
    }
    
  }
  if(cracked)
    {
      buffer = buffer + ustring(data->data(),data->length());
      printf("%i\n",buffer.decrypted);
      while (buffer.length() > 0)
      {
	if (not buffer.decrypted)
	{
	  //
	  if (buffer.length() >= 4)
	  {
	  servercrypt->Decrypt(buffer);
	  
	  buffer >> plen2;
	  buffer >> opcode;
	  }else{
	    buffer.decrypted = false;
	    break;
	  }
	  cout << "Server Decrypt buffer: Got len "<< ntohs(plen2) << endl;
	  
	}
	if (ntohs(plen2)-2 < 0)
	  return;
	//memcpy(&plen,buffer.data(),sizeof(unsigned short));
	cout << "Waiting for " << buffer.length() << "/" << ntohs(plen2)-2<< " Bytes (server)" << endl;
	if ( getopcodebycode(opcode) == "" )
	    {
	      servermessagefmt("Errore di decrittazione, la cifratura verrà resettata\n");
	      cout << "Server: Decrittazione fallita, reset" << endl;
	      servercrypt->Reset();
	      waitingpong = false;
	      buffer.clear();
	      cracked = false;
	      
	      d2.clear();
	      return;
	    }
	if( buffer.length() >= ntohs(plen2)-2 )
	{
	  cout << "Moving " << ntohs(plen2)-2 << "Bytes to d2" << endl;
	  d2 = buffer.popdata(ntohs(plen2)-2);
	  buffer.decrypted = false;

	    
	    //printkey(d2.data(),d2.length());
	    cout <<"Server: "<< ntohs(plen2) <<" | | " << getopcodebycode(opcode) << endl;
	    //clientmessagefmt("Pacchetto: Lunghezza %i Byte, Opcode: %s\n",ntohs(plen2),getopcodebycode(opcode).c_str());
	    handleserverpacket(&d2,opcode,ntohs(plen2));

	}else{
	  buffer.decrypted = true;
	  return; // Aspetta + dati
	}
      }}else{
	buffer = ustring(data->data(),data->length());
	servercrypt->Decrypt(buffer);
	buffer >> plen2;
	buffer.clear();
	
      }

  //printkey(d2.data(),d2.length());   
  if ( servercrypt == NULL )
  {
    cout << "Fatal error , servercrypt not initialized" << endl;
    abort();
  }
  
  

    
      d2.clear();
 
  if ( not cracked)
    buffer.clear();

  //printkey(d2.data(),d2.length());
  
}
