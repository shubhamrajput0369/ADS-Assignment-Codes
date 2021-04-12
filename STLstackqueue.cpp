// Author: Shubham Bhagwansing Rajput
// CPP

#include<iostream>
#include<stack>
#include<queue>
#include<list>

using namespace std;

void displaystack(list<int>a)
{
    int c;
    list<int>::iterator i;

    for(i=a.begin();i!=a.end();i++)
    {
        cout<<*i<<" ";
    }
