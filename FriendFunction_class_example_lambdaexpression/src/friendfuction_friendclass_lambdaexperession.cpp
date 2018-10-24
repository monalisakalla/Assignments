	#include <iostream>
	#include <vector>
	#include <bits/stdc++.h>
	using namespace std;
	#include"../inc/friendfuction_friendclass.h"
					
	// Function add() is the friend function of classes A and B
	// that accesses the member variables numA and numB
	int A::add(A objectA, B objectB)
	{
	     objectA.numA = 10;
	     objectB.numB = 20;
	     return (objectA.numA + objectB.numB);
	}
					
	int C ::sub(B b)
	{
	     int c =  b.numB -1;
	     return c;
	}
	int main()
	{
	     A objectA;
	     B objectB;
	     cout<<"Sum: "<< objectA.add(objectA, objectB) << endl;
	     C objC;
	     int d = objC.sub (objectB);
	     cout<<"Sub: "<< d<< endl;
					
					
					
	     // lambda function taking one parameter as value other as reference
	     auto glambda = [](int a, float && b) { return a < b; };
	     bool b = glambda(3, 3.14); // ok
	     cout << "is a <b " << b << endl;
					
	     std::vector<int> c = {1, 2, 3, 4, 5, 6, 7};
	     int x = 5;
	     c.erase(std::remove_if(c.begin(), c.end(), [x](int n) { return n < x; }), c.end());
					
	     std::cout << "c: ";
	     std::for_each(c.begin(), c.end(), [](int i){ std::cout << i << ' '; });
	     std::cout << '\n';
	     c.push_back(19);
	     c.push_back(16);
	     c.push_back(23);
	     c.push_back(36);
					           
	     //lambda function to add 2 numbers
					           
	     auto l = [x](int a , int b) -> int
	     {
		   return a+b+x;
	     };
		 int k = l(5,6);
							   
	     auto greater = [](auto d, auto e) -> auto
	     {
	       return d>e ;
		 };

	  std::sort(c.begin(),c.end(),greater);
	  std::cout<<"k: " <<k;
	  std::cout << '\n';					
      std::cout << "c: ";
	  std::for_each(c.begin(), c.end(), [](int i){ std::cout << i << ' '; });
	  std::cout << '\n';
	  return 0;
	}
					
					
					
				
			
