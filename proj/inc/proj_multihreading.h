#include <thread>
#include<vector>
#include <bits/stdc++.h>
#include <mutex>
#include<iostream>
#include <condition_variable>
#include <signal.h>

int TH4STARTPOS = 0;
int TH4ENDPOS = 113;
int TH1STARTPOS = 114;
int TH1ENDPOS = 228;
int TH2STARTPOS = 229;
int TH2ENDPOS = 342;
int TH3STARTPOS = 344;
int TH3ENDPOS = 459;

int THI1STARTVALUE = 100;
int TH2STARTVALUE = 300;
int TH3STARTVALUE = 400;
int TH4STARTVALUE = 500;

int MAXSIZE = 460;


using namespace std;
class WorkerThread;
class PrimaryThread
{
   public:
      PrimaryThread();
      vector <int64_t>dataregion;
      void Start();
      //void gracefullExit();
      typedef void (*greacefullExitCallBackFunPtr)();
      static void gracefullExitCallBackFunc(int signum);
      WorkerThread *wObj1;
      WorkerThread *wObj2;
      WorkerThread *wObj3;
      WorkerThread *wObj4;
      thread *wt1, *wt2,*wt3,*wt4;
};

class WorkerThread
{
   public:
	  static bool wthKeepAlive;
      WorkerThread();
      void Write(int startpos, int endpos, int startvalue, PrimaryThread *pthis, WorkerThread *nextWorkerThread);
      void Verify(int startpos, int endpos, int startvalue, PrimaryThread *pthis);
};
