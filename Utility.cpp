#include <iostream>
#include <string>
#include <map>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <stdarg.h>
#include <errno.h>
#include <signal.h>
#include <sys/time.h>
#include <sys/types.h>
#include <dirent.h>


using namespace std;
extern bool deb;
std::string strfmt(std::string fmt,...)
{
  char msgF[4096];
  va_list args;
  va_start(args,fmt);
  vsnprintf(msgF,4096,fmt.c_str(),args);
  return std::string(msgF);
}
int getdir (string dir, vector<string> &files)
{
    DIR *dp;
    struct dirent *dirp;
    if((dp  = opendir(dir.c_str())) == NULL) {
        cout << "Error(" << errno << ") opening " << dir << endl;
        return errno;
    }

    while ((dirp = readdir(dp)) != NULL) {
        files.push_back(string(dirp->d_name));
    }
    closedir(dp);
    return 0;
}


double getcurrenttime()
{
  struct timeval t;
  gettimeofday(&t,NULL);
  double ti = 0.0;
  ti = t.tv_sec;
  ti += t.tv_usec/1000000.0;
  return ti;
}
void error(std::string msg,...)
{
  char msgF[4096];
  va_list args;
  va_start(args,msg);
  vsnprintf(msgF,4096,msg.c_str(),args);
  cout << "\033[21;31m[ERROR ]\033[0m " << msgF << endl;
}
void debug(std::string msg,...)
{
  if ( deb)
  {
    char msgF[4096];
    va_list args;
    va_start(args,msg);
    vsnprintf(msgF,4096,msg.c_str(),args);
    cout << "\033[21;34m[DEBUG ]\033[0m " << msgF << endl;
  }
}
void info(std::string msg,...)
{
  char msgF[4096];
  va_list args;
  va_start(args,msg);
  vsnprintf(msgF,4096,msg.c_str(),args);
  cout << "\033[21;35m[ INFO ]\033[0m " << msgF << endl;
}
void notice(std::string msg,...)
{
  char msgF[4096];
  va_list args;
  va_start(args,msg);
  vsnprintf(msgF,4096,msg.c_str(),args);
  cout << "\033[21;36m[NOTICE]\033[0m " << msgF << endl;
}
void good(std::string msg,...)
{
  char msgF[4096];
  va_list args;
  va_start(args,msg);
  vsnprintf(msgF,4096,msg.c_str(),args);
  cout << "\033[21;32m[ GOOD ]\033[0m " << msgF << endl;
}
void bad(std::string msg,...)
{
  char msgF[4096];
  va_list args;
  va_start(args,msg);
  vsnprintf(msgF,4096,msg.c_str(),args);
  cout << "\033[21;33m[  BAD ]\033[0m " << msgF << endl;
}
char * signalname(int s)
{
  std::string sn;
  char snc[1024];
  switch(s)
  {
    case SIGABRT:
      sn = "Abort";
      break;
    case SIGSEGV:
      sn = "Segmentation Fault";
      break;
    #ifndef WIN32
    case SIGHUP:
      sn = "Hangup";
      break;
    #endif
    case SIGINT:
      sn = "Keyboard Interrupt";
      break;
    case SIGTERM:
      sn = "Terminated";
      break;
    case SIGILL:
      sn = "Illegal Instruction";
      break;
    case SIGFPE:
      sn = "Floating point exception";
      break;
    /*case SIGEMT:
      sn = "Emulate instruction violated";
      break;*/
    #ifndef WIN32
    case SIGBUS:
      sn = "Bus error";
      break;
    
    case SIGSYS:
      sn = "Bad argument to system call";
      break;
    
    case SIGQUIT:
      sn = "Quit";
      break;
      #endif
    /*case SIGSTKFLT:
      sn = "Stack Fault";
      break;*/
    /*case SIGPWR:
      sn = "Power failure";
      break;*/
    default:
      sn = "Unknown Signal";
      break;
  }
  snprintf(snc,1024,"%s",sn.c_str());
  return (snc);
}
char * geterror()
{
  debug("GetError()");
  std::string err;
  char erro[1024];
  switch (errno)
  {
    case 0:
      err = "No error";
      break;
    case E2BIG:
      err = "Argument list too long.";
      break;
  //  case EACCESS:
  //    err = "Permission denied";
      //break;
    #ifndef WIN32
    case EADDRINUSE:
      err = "Address already in use";
      break;
    case EADDRNOTAVAIL:
      err = "Address not available";
      break;
    case EAFNOSUPPORT:
      err = "Address family not supported";
      break;
    #endif
    case EAGAIN:
      err = "Resource temporarily unavaible";
      break;
    #ifndef WIN32
    case EALREADY:
      err = "Connection already in progress";
      break;
    #endif
    case EBADF:
      err = "Bad file descriptor";
      break;
    #ifndef WIN32
    case EBADMSG:
      err = "Bad Message";
      break;
    #endif
    case EBUSY:
      err = "Device or resource busy";
      break;
    /*case ECANCELED:
      err = "Operation canceled";
      break;*/
    case ECHILD:
      err = "No child processes";
      break;
    #ifndef WIN32
    case ECONNABORTED:
      err = "Connection aborted";
      break;
    case ECONNREFUSED:
      err = "Connection refused";
      break;
    case ECONNRESET:
      err = "Connection reset by peer";
      break;
    #endif
    case EDEADLK:
      err = "Resource deadlock would occour";
      break;
   // case EDESTADDREQ:
   //   err = "Destination address required";
      break;
    case EDOM:
      err = "Mathematics argument out of domain of function";
      break;
    #ifndef WIN32
    case EDQUOT:
      err = "Reserved";
      break;
    #endif
    case EEXIST:
      err = "File exists";
      break;
    case EFAULT:
      err = "Bad address";
      break;
    case EFBIG:
      err = "File too large";
      break;
    #ifndef WIN32
    case EHOSTUNREACH:
      err = "Host is unreachable";
      break;
    case EIDRM:
      err = "Identifier removed";
      break;
    #endif
    case EILSEQ:
      err = "Illegal byte sequence";
      break;
    #ifndef WIN32
    case EINPROGRESS:
      err = "Operation in progress";
      break;
    #endif
    case EINTR:
      err = "Interrupted function";
      break;
    case EINVAL:
      err = "Invalid argument";
      break;
    case EIO:
      err = "I/O Error";
      break;
    #ifndef WIN32
    case EISCONN:
      err = "Socket is connected";
      break;
    #endif
    case EISDIR:
      err = "Is a directory";
      break;
    #ifndef WIN32
    case ELOOP:
      err = "Too many levels of symbolic links";
      break;
    #endif
    case EMFILE:
      err = "Too many open files";
      break;
    case EMLINK:
      err = "Too many links";
      break;
    #ifndef WIN32
    case EMSGSIZE:
      err = "Message too large";
      break;
    
    case EMULTIHOP:
      err = "Reserved";
      break;
      
    #endif
    case ENAMETOOLONG:
      err = "Filename too long";
      break;
    #ifndef WIN32
    case ENETDOWN:
      err = "Network is down";
      break;
    case ENETRESET:
      err = "Connection aborted by network";
      break;
    case ENETUNREACH:
      err = "Network unreachable";
      break;
    #endif
    case ENFILE:
      err = "Too many open files in system";
      break;
    #ifndef WIN32
    case ENOBUFS:
      err = "No buffer space avaible";
      break;
    
    case ENODATA:
      err = "No data on stream";
      break;
    #endif
    case ENODEV:
      err = "No such device";
      break;
    case ENOENT:
      err = "No such file or directory";
      break;
    case ENOEXEC:
      err = "Executable file format error";
      break;
    case ENOLCK:
      err = "No locks avaible";
      break;
    #ifndef WIN32
    case ENOLINK:
      err = "Reserved";
      break;
    #endif
    case ENOMEM:
      err = "Not enough space";
      break;
    #ifndef WIN32
    case ENOMSG:
      err = "No message";
      break;
    
    case ENOPROTOOPT:
      err = "Protocol not avaible";
      break;
    #endif
    case ENOSPC:
      err = "No space left on device";
      break;
    #ifndef WIN32
    case ENOSR:
      err = "No stream resources";
      break;
    case ENOSTR:
      err = "Not a stream";
      break;
    #endif
    case ENOSYS:
      err = "Functon not supported";
      break;
    #ifndef WIN32
    case ENOTCONN:
      err = "The socket is not connected";
      break;
    #endif
    case ENOTDIR:
      err = "Not a directory";
      break;
    case ENOTEMPTY:
      err = "Directory not empty";
      break;
    #ifndef WIN32
    case ENOTSOCK:
      err = "Not a socket";
      break;
    #endif
    #ifndef WIN32
    case ENOTSUP:
      err = "Not supported";
      break;
    #endif
    case ENOTTY:
      err = "Inappropriate I/O control operation";
      break;
    case ENXIO:
      err = "No such device or address";
      break;
   // case EOPNOTSUPP:
   //   err = "Operation not supported on socket";
      break;
    #ifndef WIN32
    case EOVERFLOW:
      err = "Value too large to be stored in data type";
      break;
    #endif
    case EPERM:
      err = "Operation not permitted";
      break;
    case EPIPE:
      err = "Broken pipe";
      break;
    #ifndef WIN32
    case EPROTO:
      err = "Protocol error";
      break;
    case EPROTONOSUPPORT:
      err = "Protocol not supported";
      break;
    case EPROTOTYPE:
      err = "Protocol wrong type for socket";
      break;
    #endif
    case ERANGE:
      err = "Result too large";
      break;
    case EROFS:
      err = "Read-only file system";
      break;
    case ESPIPE:
      err = "Invalid seek";
      break;
    case ESRCH:
      err = "No such process";
      break;
    #ifndef WIN32
    case ESTALE:
      err = "Reserved";
      break;
    
    case ETIME:
      err = "Operation timed out";
      break;
      
    case ETXTBSY:
      err = "Text file busy";
      break;
    #endif
   // case EWOULDBLOCK:
    //  err = "Operation would block";
      break;
    case EXDEV:
      err = "Cross-device link.";
      break;
    
    default:
      err = "Unknown error code";
  }
  snprintf(erro,1024,"%s",err.c_str());  
    
  return (erro);  
  }
void printvectorS(std::vector<std::string> vec)
{
  std::vector<std::string>::iterator it;
  cout << "Vector: [";
  for ( it = vec.begin();it < vec.end();it++)
    cout << *it << "(" << (*it).length() << ")" << ",";
  cout << "]" << endl;
  
}
std::vector<std::string> split(std::string s,std::string d)
{
  std::string s2(s);
  std::vector<std::string> v;
  while ( s2.find(d) != string::npos)
  {
    
    v.push_back(s2.substr(0,s2.find(d)));
    s2 = s2.substr(s2.find(d)+1,-1);
  }
  if ( s2.length() > 0 )
  {
    v.push_back(s2);
  }
 // printvectorS(v);
  return v;
  
}
string join(vector<string> ar,int start)
{
  vector<string>::iterator it;
  string str;
  for ( it=ar.begin()+start; it < ar.end(); it++)
  {
   str.append(*it+" ");
  }
  str.erase(str.length()-1,1);
  return str;
}
void delchr(char c, string &s){
std::string::size_type k = 0;
while((k=s.find(c,k))!=s.npos) {
s.erase(k, 1);
}
}
std::string getfiledata(char * filename)
{
  FILE * f;
  f = fopen(filename,"r");
  if (not f)
  {
    error("Cannot load file "+string(filename));
    return std::string("FAIL");
  }
  int s = 0;
  char * data;
  fseek(f,0,SEEK_END);
  s = ftell(f);
  fseek(f,0,SEEK_SET);
  data = (char*)malloc(s+1);
  fread(data,s,1,f);
  fclose(f);
  data[s] = 0;
  return std::string(data);
}
