#include"../inc/template_example.h"
#include<iostream>


template <class T, class S>
void Template_Example::swap(T& t1, S& t2)
{

    int temp = t1;
    t1 = t2;
    t2 = temp;
}


template <class T>
T Template_Calc<T>::add(T t1, T t2)
{
    return t1+t2;
}

template <class T>
T Template_Calc<T>::Sub(T t1, T t2)
{
    return t1-t2;
}

template <class T>
T Template_Calc<T>::Mul(T t1, T t2)
{
    return t1*t2;
}

template <class T>
T Template_Calc<T>::Div(T t1, T t2)
{
    return t1/t2;
}

int main(int argc, char **argv)
{
    Template_Example templateobj;
    char char1 = 'a';
    char char2 = 'c';
    std::cout << "Before Swap char1:" << char1<<"  char2:" << char2<<std::endl;
    templateobj.swap(char1,char2);

    std::cout << "After Swap char1:" << char1<<"  char2:" << char2<<std::endl;

    int num1 = 100;
    int num2 = 200;
    std::cout << "Before Swap num1:" << num1<<"  num2:" << num2<<std::endl;
    templateobj.swap(num1,num2);

    std::cout << "After Swap num1:" << num1<<"  num2:" << num2<<std::endl;


    std::cout << "Before Swap char1:" << char1<<"  num2:" << num2<<std::endl;
    templateobj.swap(char1,num2);
    std::cout << "After Swap char1:" << char1<<"  num2:" << num2<<std::endl;

    Template_Calc<int> tcalcobj;

    int temp1  = 5;
    int temp2  =6;
    int i = tcalcobj.add(temp1,temp2);
    std::cout<< "Addition of int num" << i << std::endl;

    i = tcalcobj.Sub(temp1,temp2);
    std::cout<< "Sub of int num" << i << std::endl;

    i = tcalcobj.Mul(temp1,temp2);
    std::cout<< "Mul of int num" << i << std::endl;

    i = tcalcobj.Div(temp1,temp2);
    std::cout<< "Division of int num" << i << std::endl;

    Template_Calc<float> tcalcobj1;
    float temp3 = 5.6;
    float temp4 = 8.5;
    float j = tcalcobj1.add(temp3,temp4);
    std::cout<< "Addition of float num" << j << std::endl;

    j = tcalcobj1.Sub(temp3,temp4);
    std::cout<< "Sub of float num" << j << std::endl;

    j = tcalcobj1.Mul(temp3,temp4);
    std::cout<< "Mul of float num" << j << std::endl;

    j = tcalcobj1.Div(temp3,temp4);
    std::cout<< "Division of float num" << j << std::endl;

}
