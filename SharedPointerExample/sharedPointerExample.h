class Base
{
public:
    Base();
    // Note: non-virtual destructor is OK here
    ~Base();
};

class Derived: public Base
{
public:
    Derived();
    ~Derived();
};
