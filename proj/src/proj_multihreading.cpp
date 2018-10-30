#include "../inc/proj_multihreading.h"

static bool threadCreation = false;
static bool keepAlive =  true;
bool WorkerThread::wthKeepAlive = true;
PrimaryThread::PrimaryThread()
{
	dataregion.resize(MAXSIZE);
}

void PrimaryThread::gracefullExitCallBackFunc(int signum)
{
	cout<<endl<<"gracefull exit called"<<endl;
	WorkerThread::wthKeepAlive = false;
	keepAlive = false;
}

void PrimaryThread::Start()
{
   wObj1 = new WorkerThread();
   wObj2  = new WorkerThread();
   wObj3 = new WorkerThread();
   wObj4 = new WorkerThread();
   
   wt1 = new thread(&WorkerThread::Write, wObj1,TH1STARTPOS, TH1ENDPOS,THI1STARTVALUE, this,wObj2);
   wt1->detach();
   
   wt2 = new thread(&WorkerThread::Write, wObj2,TH2STARTPOS, TH2ENDPOS,TH2STARTVALUE,this,wObj3);
   wt2->detach();
   
   wt3 = new thread(&WorkerThread::Write, wObj3,TH3STARTPOS, TH3ENDPOS,TH3STARTVALUE,this,wObj4);
   wt3->detach();
   
   wt4 = new thread(&WorkerThread::Write, wObj4,TH4STARTPOS, TH4ENDPOS,TH4STARTVALUE,this,wObj1);
   wt4->detach();
}
	
WorkerThread::WorkerThread()
{
	cout<< endl << "Worker thread boject created" << endl;
}
	
void WorkerThread::Write(int startpos, int endpos, int startvalue, PrimaryThread *pthis, WorkerThread *nextWorkerThread)
{
	while(wthKeepAlive)
	{
		int initvalue = startvalue;
		cout<<endl<<"startpos :"<<startpos << "   " <<"endpos :"<<endpos<<"  "<<"startvalue :" <<startvalue;
		for(int count = startpos ; count<= endpos; count++)
		{
			//cout<<endl<<count<<endl;
			pthis->dataregion[count] = initvalue;
			initvalue++;
		}
		nextWorkerThread->Verify(startpos,endpos,startvalue,pthis);	
    }
    cout << endl << "Worker thread exited successfully!!!!" << endl;
}
	
void WorkerThread::Verify(int startpos, int endpos, int startvalue, PrimaryThread *pthis)
{
	int initvalue = startvalue;
	int misscount = 0;
	cout<<endl<<"startpos verify :"<<startpos << "   " <<"endpos :"<<endpos<<"  "<<"startvalue :" <<startvalue;
	for(int count = startpos ; count<= endpos; count++)
	{
		if(pthis->dataregion.at(count) != initvalue)
		{
		  cout <<endl <<"Value not matched at pos: " << count <<"current value is:" <<
		  pthis->dataregion.at(count) << endl;
		  misscount++;
		}
		initvalue ++ ;
	}
	cout<<endl << "Count of values missed to write in this data region is :" << misscount <<endl;
}
	
int main()
{	 
	while (keepAlive)
	{	
		if(!threadCreation)
		{
			threadCreation = true;
			PrimaryThread *pth = new PrimaryThread();
		    thread primaryThread( &PrimaryThread::Start,pth);
		    signal(SIGINT, PrimaryThread::gracefullExitCallBackFunc);
		    primaryThread.join();
		 }
	 }
	 cout << endl << "Main thread exited successfully" << endl;
    return 1;
}
	
