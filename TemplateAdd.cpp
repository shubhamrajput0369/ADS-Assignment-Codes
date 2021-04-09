// Author: Shubham Bhagwansing Rajput
// CPP

#include<iostream>
using namespace std;

template<class T>
void add(T a, T b)
{
    T c;
    c = a+b;
    cout<<"\nAddition is :- "<<c;
}

int main()
{
    int a=7, b=7;
    float x=5.5, y=7.7;
    long g=1234567, h=12348;
    double c=5.555555555, d=7.7777777777;

    cout<<"*****ADDITION USING TEMPLATE FUNCTION*****\n";
    add<int>(a,b);
    add<float>(x,y);
