
#include "Thread.h"
Thread::Thread(void *(*f)(void *),void * arg)
{
  debug("Spawning new thread");
  #ifdef WIN32
  tid = CreateThread(NULL,0, (LPTHREAD_START_ROUTINE) f,arg,0,NULL);
  int err = 0;
  if (tid == NULL)
    err = -1;
  else
    err = 0;
  #else
  int err = pthread_create(&tid,NULL,f,arg);
  #endif
  if ( err != 0)
  {
    error("FATAL: Thread failed to spawn");
    abort();
  }
  
}
void Thread::Join()
{
  #ifndef WIN32
  pthread_join(tid,NULL);
  #else
  error("Join not supported on windoze");
  #endif
}
void Thread::Kill()
{
 // pthread_kill(tid,SIGHUP); Epic fail
}
#ifndef WIN32
Mutex::Mutex()
{
  if (pthread_mutex_init(&mid,NULL) != 0)
  {
    error("Cannot create mutex");
  }
}
void Mutex::Lock()
{
  pthread_mutex_lock(&mid);
}
void Mutex::UnLock()
{
  pthread_mutex_unlock(&mid);
}
void Mutex::TryLock()
{
   pthread_mutex_trylock(&mid);
}
  
#endif