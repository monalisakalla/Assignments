#include<string.h>
class Constructor_Example
{
public:
    Constructor_Example();
    Constructor_Example(std::string str);
    Constructor_Example(const Constructor_Example &obj);
    Constructor_Example& operator= (const Constructor_Example& obj);
    int operator() (int val);

};
