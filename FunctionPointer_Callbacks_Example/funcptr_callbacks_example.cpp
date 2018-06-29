#include<iostream>
#include "funcptr_callbacks_example.h"

using namespace std;

int CallBack_Example::add(int a, int b)
{
    return a+b;
}


int FunctionPointer_Example::addOffSet(FuncPtr ptr)
{
    int res = ptr(11,6);
    cout<<"addOffset function pointer parameter result: " << res << endl;
    return res;
}
int main()
{
    FunctionPointer_Example funptrobj;
    // callback to add function
    FunctionPointer_Example::FuncPtr ptr;

    ptr= CallBack_Example::add;

    //call via function pointer
    int res = ptr(5,6);
    cout << "result of call back function is: " <<res << endl;
    //call function pointer as argument
    funptrobj.addOffSet(ptr);
}
