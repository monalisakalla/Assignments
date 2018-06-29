#include <iostream>
#include <unistd.h> //To include sleep function
#include<ctime> //To get system time
#include <pthread.h>
#include<vector>
using namespace std;
string s;
time_t Time = time(0);
vector <int> g1;
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
void* funcPush(void*)
{
    auto i{0};
    while (true)
    {

        s = ctime(&Time);


        pthread_mutex_lock( &mutex1 );
        g1.push_back(++i);
        pthread_mutex_unlock( &mutex1 );
        cout << "Child thread pushing value:"<< i<<'\t'<<s<<endl;
        sleep(1); //Calls sleep function
    }

}

void* funcPop(void*)
{
    auto i{0};
    vector <int> :: iterator itr;
    while (true)
    {

        s = ctime(&Time);
        pthread_mutex_lock( &mutex1 );
        itr = g1.end();
        if(g1.size()!= 0)
        {
            if((*itr) <= g1.size())
            {
                i = g1.at(*itr);
                g1.pop_back();

            }
            cout << "Child thread pop vaue: "<<i<< '\t' << s<<endl;
            sleep(1); //Calls sleep function
        }
        pthread_mutex_unlock( &mutex1 );
    }
}
int main()
{
    s = ctime(&Time);
    pthread_t t1,t2;
    // cout<<"Thread T["<<i<<"] is Created "<<s<<endl;
    pthread_create(&t1, NULL, &funcPush, NULL); //Step 2: calling create thread function


    pthread_create(&t2, NULL, &funcPop, NULL); //Step 2: calling create thread function

    pthread_join(t1,NULL); //Joining threads, main thread waits for child thread to complete
    pthread_join(t2,NULL); //Joining threads, main thread waits for child thread to complete


    exit(EXIT_SUCCESS); //Exiting after completion
    return 0;
}
