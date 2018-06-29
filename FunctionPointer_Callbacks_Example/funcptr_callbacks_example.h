
class FunctionPointer_Example
{
public:

    //declaring a function pointer which can point to a function having 2 args ant returns int
    typedef int (*FuncPtr)(int a, int b);
    int addOffSet(FuncPtr ptr);

};

class CallBack_Example
{
public:
    static int add(int a, int b);
};
