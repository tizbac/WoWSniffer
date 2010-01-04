#include <iostream>                                                                                                                                                                                    
std::string getlanguagename(unsigned int id)                                                                                                                                                                    
{                                                                                                                                                                                                      
std::string languagename;                                                                                                                                                                              
switch (id)                                                                                                                                                                                            
  {                                                                                                                                                                                                    
  case 0:                                                                                                                                                                                              
    languagename = "Universal";                                                                                                                                                                   
    break;                                                                                                                                                                                             
  case 1:                                                                                                                                                                                              
    languagename = "Orcish";                                                                                                                                                                      
    break;                                                                                                                                                                                             
  case 33:                                                                                                                                                                                             
    languagename = "Gutterspeak";                                                                                                                                                                 
    break;                                                                                                                                                                                             
  case 3:                                                                                                                                                                                              
    languagename = "Taurahe";                                                                                                                                                                     
    break;                                                                                                                                                                                             
  case 2:                                                                                                                                                                                              
    languagename = "Darnassian";                                                                                                                                                                  
    break;                                                                                                                                                                                             
  case 8:                                                                                                                                                                                              
    languagename = "Demonic";                                                                                                                                                                     
    break;                                                                                                                                                                                             
  case 35:                                                                                                                                                                                             
    languagename = "Draenei";                                                                                                                                                                     
    break;                                                                                                                                                                                             
  case 38:                                                                                                                                                                                             
    languagename = "Binary";                                                                                                                                                               
    break;                                                                                                                                                                                             
  case 9:                                                                                                                                                                                              
    languagename = "Titan";                                                                                                                                                                       
    break;                                                                                                                                                                                             
  case 36:                                                                                                                                                                                             
    languagename = "Zombie";                                                                                                                                                                      
    break;                                                                                                                                                                                             
  case 10:                                                                                                                                                                                             
    languagename = "Thalassian";                                                                                                                                                                  
    break;                                                                                                                                                                                             
  case 37:                                                                                                                                                                                             
    languagename = "GBinary";                                                                                                                                                              
    break;                                                                                                                                                                                             
  case 11:                                                                                                                                                                                             
    languagename = "Draconic";                                                                                                                                                                    
    break;                                                                                                                                                                                             
  case 6:                                                                                                                                                                                              
    languagename = "Dwarvish";                                                                                                                                                                    
    break;                                                                                                                                                                                             
  case 12:                                                                                                                                                                                             
    languagename = "Kalimag";                                                                                                                                                                     
    break;                                                                                                                                                                                             
  case 7:                                                                                                                                                                                              
    languagename = "Common";                                                                                                                                                                      
    break;                                                                                                                                                                                             
  case 13:                                                                                                                                                                                             
    languagename = "Gnomish";
    break;
  case 14:
    languagename = "Troll";
    break;
  case 4294967295:
    languagename = "Addons";
    break;
  }
return languagename;
}
std::string getchatmsgtype(unsigned int id)                                                                                                                                                               
{                                                                                                                                                                                                
std::string chattypename;                                                                                                                                                                        
switch (id)                                                                                                                                                                                      
  {                                                                                                                                                                                              
  case 21:                                                                                                                                                                                       
    chattypename = "ChannelNotice";                                                                                                                                                    
    break;                                                                                                                                                                                       
  case 32:                                                                                                                                                                                       
    chattypename = "Combat-Info";                                                                                                                                                  
    break;                                                                                                                                                                                       
  case 23:                                                                                                                                                                                       
    chattypename = "AFK";                                                                                                                                                               
    break;                                                                                                                                                                                       
  case 34:                                                                                                                                                                                       
    chattypename = "Honor";                                                                                                                                                 
    break;                                                                                                                                                                                       
  case 9:                                                                                                                                                                                        
    chattypename = "Reply";                                                                                                                                                             
    break;                                                                                                                                                                                       
  case 36:                                                                                                                                                                                       
    chattypename = "BGSYS";                                                                                                                                                 
    break;                                                                                                                                                                                       
  case 11:                                                                                                                                                                                       
    chattypename = "Emote";                                                                                                                                                        
    break;                                                                                                                                                                                       
  case 38:                                                                                                                                                                                       
    chattypename = "BGSYSHORDE";                                                                                                                                                   
    break;                                                                                                                                                                                       
  case 13:                                                                                                                                                                                       
    chattypename = "Monster";                                                                                                                                                     
    break;                                                                                                                                                                                       
  case 24:                                                                                                                                                                                       
    chattypename = "DND";                                                                                                                                                               
    break;                                                                                                                                                                                       
  case 15:                                                                                                                                                                                       
    chattypename = "MonsterWHisp";                                                                                                                                                   
    break;                                                                                                                                                                                       
  case 26:                                                                                                                                                                                       
    chattypename = "Skill";                                                                                                                                                             
    break;                                                                                                                                                                                       
  case 1:                                                                                                                                                                                        
    chattypename = "Say";                                                                                                                                                               
    break;                                                                                                                                                                                       
  case 28:                                                                                                                                                                                       
    chattypename = "Money";                                                                                                                                                             
    break;                                                                                                                                                                                       
  case 3:                                                                                                                                                                                        
    chattypename = "Raid";                                                                                                                                                              
    break;                                                                                                                                                                                       
  case 30:                                                                                                                                                                                       
    chattypename = "Tradeskills";                                                                                                                                                       
    break;                                                                                                                                                                                       
  case 41:                                                                                                                                                                                       
    chattypename = "Boss_WHisper";                                                                                                                                                 
    break;                                                                                                                                                                                       
  case 5:                                                                                                                                                                                        
    chattypename = "GOfficer";                                                                                                                                                           
    break;                                                                                                                                                                                       
  case 16:                                                                                                                                                                                       
    chattypename = "M_Emote";                                                                                                                                                     
    break;                                                                                                                                                                                       
  case 43:                                                                                                                                                                                       
    chattypename = "Filtered";                                                                                                                                                          
    break;                                                                                                                                                                                       
  case 7:                                                                                                                                                                                        
    chattypename = "Whisper";                                                                                                                                                           
    break;                                                                                                                                                                                       
  case 18:                                                                                                                                                                                       
    chattypename = "Joined";                                                                                                                                                      
    break;                                                                                                                                                                                       
  case 45:                                                                                                                                                                                       
    chattypename = "BG-Leader";                                                                                                                                               
    break;                                                                                                                                                                                       
  case 20:                                                                                                                                                                                       
    chattypename = "CHannel-List";                                                                                                                                                      
    break;                                                                                                                                                                                       
  case 22:                                                                                                                                                                                       
    chattypename = "ChannelNotice";                                                                                                                                               
    break;                                                                                                                                                                                       
  case 33:                                                                                                                                                                                       
    chattypename = "XpGain";                                                                                                                                                    
    break;                                                                                                                                                                                       
  case 8:                                                                                                                                                                                        
    chattypename = "Whisper Info";                                                                                                                                                    
    break;                                                                                                                                                                                       
  case 35:                                                                                                                                                                                       
    chattypename = "Faction Change";                                                                                                                                             
    break;                                                                                                                                                                                       
  case 4294967295:                                                                                                                                                                               
    chattypename = "Addon";                                                                                                                                                             
    break;                                                                                                                                                                                       
  case 10:                                                                                                                                                                                       
    chattypename = "Emote";                                                                                                                                                             
    break;                                                                                                                                                                                       
  case 37:                                                                                                                                                                                       
    chattypename = "BGSYSALLY";                                                                                                                                                
    break;                                                                                                                                                                                       
  case 12:                                                                                                                                                                                       
    chattypename = "M_Say";                                                                                                                                                       
    break;                                                                                                                                                                                       
  case 39:                                                                                                                                                                                       
    chattypename = "Raid Leader";                                                                                                                                                       
    break;                                                                                                                                                                                       
  case 14:                                                                                                                                                                                       
    chattypename = "M_Yell";                                                                                                                                                      
    break;                                                                                                                                                                                       
  case 25:                                                                                                                                                                                       
    chattypename = "Ignored";                                                                                                                                                           
    break;                                                                                                                                                                                       
  case 0:                                                                                                                                                                                        
    chattypename = "SYSTEM";                                                                                                                                                            
    break;                                                                                                                                                                                       
  case 27:                                                                                                                                                                                       
    chattypename = "Loot";                                                                                                                                                              
    break;                                                                                                                                                                                       
  case 2:                                                                                                                                                                                        
    chattypename = "Party";                                                                                                                                                             
    break;                                                                                                                                                                                       
  case 29:                                                                                                                                                                                       
    chattypename = "Opening";                                                                                                                                                           
    break;                                                                                                                                                                                       
  case 40:                                                                                                                                                                                       
    chattypename = "Raid Warning";                                                                                                                                                      
    break;                                                                                                                                                                                       
  case 4:                                                                                                                                                                                        
    chattypename = "Guild";                                                                                                                                                             
    break;                                                                                                                                                                                       
  case 31:                                                                                                                                                                                       
    chattypename = "CHAT_MSG_PET_INFO";                                                                                                                                                          
    break;                                                                                                                                                                                       
  case 42:                                                                                                                                                                                       
    chattypename = "CHAT_MSG_RAID_BOSS_EMOTE";                                                                                                                                                   
    break;                                                                                                                                                                                       
  case 6:                                                                                                                                                                                        
    chattypename = "Yells";                                                                                                                                                              
    break;                                                                                                                                                                                       
  case 17:                                                                                                                                                                                       
    chattypename = "CHAT_MSG_CHANNEL";                                                                                                                                                           
    break;                                                                                                                                                                                       
  case 44:                                                                                                                                                                                       
    chattypename = "CHAT_MSG_BATTLEGROUND";
    break;
  case 19:
    chattypename = "CHAT_MSG_CHANNEL_LEAVE";
    break;
  case 46:
    chattypename = "CHAT_MSG_RESTRICTED";
    break;
  }
return chattypename;
}
