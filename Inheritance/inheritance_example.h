
class Base
{
public:

    int add(int a, int b);
};

class Derived1: public Base
{
public:
    int sub(int a, int b);
};

class Derived3
{
public:
    virtual int Mul(int a, int b);
};

class Derived2 : public Derived1, public Derived3
{
public:
    int sub(int a, int b);
    int Mul(int a, int b);
};
