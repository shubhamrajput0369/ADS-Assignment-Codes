// Author: Shubham Bhagwansing Rajput
// CPP

#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    Private:

    int age;
    float income;
    string city;
    char ans;

    try
    {
        cout<<"Enter Your Age";
        cin>>age;
        if(age<18 || age>50)
            throw(age);


        cout<<"Enter Your Income";
        cin>>income;
        if(income<50000 || income>100000)
            throw(income);