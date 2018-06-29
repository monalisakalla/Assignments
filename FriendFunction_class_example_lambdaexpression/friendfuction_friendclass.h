// forward declaration
class B;
class C;
class A {
    private:
      int numA;
public:
      A(): numA(12) { }
      // friend function declaratio
      int add(A, B);
};

class B {
    private:
       int numB;
    public:
       B(): numB(1) { }
       // friend function declaration
       friend int A::add(A , B);
       friend class C;
       //int add(A , B);
};


class C
{
private:
    int numC;
public :
    C():numC(1){}
    //friend class B;
    int sub(B);
    //void printData(B obj);
};
