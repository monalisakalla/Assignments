#include<iostream>


class SingleTonExample
{
	private:
	 static SingleTonExample* singleTonObj;
	 SingleTonExample(){};
	 SingleTonExample(const SingleTonExample&){};
	 SingleTonExample& operator =(const SingleTonExample&) {};
    public:
	 ~SingleTonExample(){};
	 static SingleTonExample* getInstance();
};
