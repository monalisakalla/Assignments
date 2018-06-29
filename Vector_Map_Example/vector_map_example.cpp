
#include<iostream>
#include<vector>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //vector
    vector <int> g1;
    vector <int> :: iterator i;
    vector <int> :: reverse_iterator ir;

    for (int i = 1; i <= 5; i++)
        g1.push_back(i);

    cout << "Output of begin and end:\t";
    for (i = g1.begin(); i != g1.end(); ++i)
        cout << *i << '\t';

    cout << endl << endl;
    cout << "Output of rbegin and rend:\t";
    for (ir = g1.rbegin(); ir != g1.rend(); ++ir)
        cout << *ir << '\t';
    cout<<endl;

    cout << "Size : " << g1.size();
    cout << "\nCapacity : " << g1.capacity();

    cout << "\nMax_Size : " << g1.max_size() <<endl;


    //map
    cout<< "ordred map" << endl;
    map <int, int> numMap;        // empty map container
    map <int, int> :: iterator itr;
    // insert elements in random order
    numMap.insert(pair <int, int> (1, 40));
    numMap.insert(pair <int, int> (3, 30));
    numMap.insert(pair <int, int> (2, 60));
    numMap.insert(pair <int, int> (4, 20));
    numMap.insert(pair <int, int> (5, 50));
    numMap.insert(pair <int, int> (6, 50));
    numMap.insert(pair <int, int> (7, 10));
    numMap.insert(pair <int, int> (3, 80));

    for (itr =numMap.begin(); itr != numMap.end();++itr)
    {
        cout  <<  '\t' << itr->first
               <<  '\t' << itr->second << '\n';
    }

    cout << "unordered map" << endl;
    std::unordered_map<int, int> noorder;

        // Mapping values to keys
        noorder[5] = 10;
        noorder[3] = 5;
        noorder[20] = 100;
        noorder[1] = 1;

        // Iterating the map and printing unordered values
        //here we have used auto, which means it will automatically takes the type
        //of the value whichi it has been asigned with , c++11 auto keywors concept
        for (auto i = noorder.begin(); i != noorder.end(); i++) {
            cout << i->first << " : " << i->second << '\n';
        }
    return 0;
}
