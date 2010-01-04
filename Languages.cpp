#include <iostream>                                                                                                                                                                                    
std::string getlanguagename(unsigned int id)                                                                                                                                                                    
{                                                                                                                                                                                                      
std::string languagename;                                                                                                                                                                              
switch (id)                                                                                                                                                                                            
  {                                                                                                                                                                                                    
  case 0:                                                                                                                                                                                              
    languagename = "LANG_UNIVERSAL";                                                                                                                                                                   
    break;                                                                                                                                                                                             
  case 1:                                                                                                                                                                                              
    languagename = "LANG_ORCISH";                                                                                                                                                                      
    break;                                                                                                                                                                                             
  case 33:                                                                                                                                                                                             
    languagename = "LANG_GUTTERSPEAK";                                                                                                                                                                 
    break;                                                                                                                                                                                             
  case 3:                                                                                                                                                                                              
    languagename = "LANG_TAURAHE";                                                                                                                                                                     
    break;                                                                                                                                                                                             
  case 2:                                                                                                                                                                                              
    languagename = "LANG_DARNASSIAN";                                                                                                                                                                  
    break;                                                                                                                                                                                             
  case 8:                                                                                                                                                                                              
    languagename = "LANG_DEMONIC";                                                                                                                                                                     
    break;                                                                                                                                                                                             
  case 35:                                                                                                                                                                                             
    languagename = "LANG_DRAENEI";                                                                                                                                                                     
    break;                                                                                                                                                                                             
  case 38:                                                                                                                                                                                             
    languagename = "LANG_GOBLIN_BINARY";                                                                                                                                                               
    break;                                                                                                                                                                                             
  case 9:                                                                                                                                                                                              
    languagename = "LANG_TITAN";                                                                                                                                                                       
    break;                                                                                                                                                                                             
  case 36:                                                                                                                                                                                             
    languagename = "LANG_ZOMBIE";                                                                                                                                                                      
    break;                                                                                                                                                                                             
  case 10:                                                                                                                                                                                             
    languagename = "LANG_THALASSIAN";                                                                                                                                                                  
    break;                                                                                                                                                                                             
  case 37:                                                                                                                                                                                             
    languagename = "LANG_GNOMISH_BINARY";                                                                                                                                                              
    break;                                                                                                                                                                                             
  case 11:                                                                                                                                                                                             
    languagename = "LANG_DRACONIC";                                                                                                                                                                    
    break;                                                                                                                                                                                             
  case 6:                                                                                                                                                                                              
    languagename = "LANG_DWARVISH";                                                                                                                                                                    
    break;                                                                                                                                                                                             
  case 12:                                                                                                                                                                                             
    languagename = "LANG_KALIMAG";                                                                                                                                                                     
    break;                                                                                                                                                                                             
  case 7:                                                                                                                                                                                              
    languagename = "LANG_COMMON";                                                                                                                                                                      
    break;                                                                                                                                                                                             
  case 13:                                                                                                                                                                                             
    languagename = "LANG_GNOMISH";
    break;
  case 14:
    languagename = "LANG_TROLL";
    break;
  case 4294967295:
    languagename = "LANG_ADDON";
    break;
  }
return languagename;
}
