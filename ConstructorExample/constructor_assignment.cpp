/*
 * untitled.cxx
 *
 * Copyright 2018 Monalisa <monalisa@AHMCPU1789>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */


#include <iostream>
#include "constructor_assignment.h"
#include <string>



Constructor_Example::Constructor_Example()
{
    std::cout<< "Default constructor called" << std::endl;
}
Constructor_Example::Constructor_Example(std::string str)
{
    std::cout<< "Parameterized constructor called with parameter" << str << std::endl;
}

Constructor_Example::Constructor_Example(const Constructor_Example &obj)
{
    std::cout << "Overloaded Copy constructor called " << std::endl;
}

Constructor_Example& Constructor_Example::operator= (const Constructor_Example& obj)
{
    std::cout << "Overloaded Assignment operator called" << std::endl;
    return *this;
}

int Constructor_Example::operator() (int val)
{
    return val + 5;
}
int main(int argc, char **argv)
{

    Constructor_Example cons;//Default constructor will be called
    std::string name  = std::string("monalisa");
    Constructor_Example cons_parameter(name);//parameterized constructor will be called
    Constructor_Example cons1(cons);//copy constructor wil be called
    Constructor_Example cons3;
    cons = cons3;

    //functor call
    int i = cons(5);
    std::cout<< "value of i using functor" << i << std::endl;
}

