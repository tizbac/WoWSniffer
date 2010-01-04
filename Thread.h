#ifndef THREAD_H
#define THREAD_H
#ifdef WIN32
#include <windows.h>
#else
#include <pthread.h>
#endif
#include <iostream>
#include <map>
#include "Utility.h"
#include <stdlib.h>
#include <signal.h>
using namespace std;
class Thread{
  public:
  #ifdef WIN32
  HANDLE tid;
  #else
  pthread_t tid;
  #endif
  Thread(void *(*f)(void *),void * arg);
  void Kill();
  void Join();
};
#ifndef WIN32
class Mutex{
  public:
  pthread_mutex_t mid;
  Mutex();
  void Lock();
  void UnLock();
  void TryLock();
  
};
#endif
#endif