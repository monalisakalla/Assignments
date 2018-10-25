#include "../inc/singletonexample.h"


SingleTonExample* SingleTonExample::singleTonObj = NULL;
SingleTonExample* SingleTonExample::getInstance()
{
	if( NULL == singleTonObj)
	{
		std::cout<<"New obj created"<<std::endl;
		singleTonObj = new SingleTonExample();
	}
	else
	{
		std::cout<<"same obj returned"<<std::endl;
	}
	return singleTonObj;
}

int main()
{
	SingleTonExample* tempObj = SingleTonExample::getInstance();
	SingleTonExample* tempObj1 = SingleTonExample::getInstance();
	return 0;
}
