#include<iostream>
#include "inheritance_example.h"

using namespace std;


int Base::add(int a, int b)
{
    cout<< "Base class add called with res:" << (a+b) << endl ;
    return a+b;
}
Base::Base()
{

}

Base::Base(int a, int b):d(a),f(b)
{

}

Base::~Base()
{
    cout << "Destructor called";
}
int Derived1::sub(int a, int b)
{
    cout << "Derived1 sub called with res:" << (a-b) << endl;
    return a-b;
}

int Derived2::sub(int a, int b)
{
    cout << "Derived2 sub is called with res:" << (a-b) << endl;
    return a-b;
}

int Derived3::Mul(int a, int b)
{
    cout<< "Derived 3 virtual mul fuction is called with res:" << (a*b) << endl;
    return a*b;
}

int Derived2::Mul(int a, int b)
{
    cout<< "Derived 2 Mul is called with value:" <<(a*b)<<endl;
    return a*b;
}
int main()
{
    Derived2* d2Obj;
    d2Obj->add(1,2);
    d2Obj->sub(3,2);

    Derived3 *d3Obj = new Derived3();
    d3Obj->Mul(5,6);

    Derived3 *d3Obj1 = new Derived2();
    d3Obj1->Mul(6,7);


    //Uniform initialization
    float u {2.777};
    float p {6.456};

    d2Obj->add(u,p);

    u = 2;
    p = 6;
    d2Obj->add(u,p);

    //Base* basePtr{new Base{2.4,3.5}};error narrowing
    Base* basePtr{new Base{2,3}};
    return 0;
}
