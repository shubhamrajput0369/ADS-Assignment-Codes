// Author: Shubham Bhagwansing Rajput
// CPP

#include<iostream>
using namespace std;

class Calculator
{

    public:
    int a,b,c,ch;

    public:
    void getData()
    {
        cout<<"Enter First Number";
        cin>>a;

        cout<<"Enter Second Number";
        cin>>b;
    }
    void display()
    {
        cout<<"*****MENU*****";
        cout<<"\n1. Addition";
        cout<<"\n2. Substraction";
        cout<<"\n3. Multication";
        cout<<"\n4. Divide";

        cout<<"\nChoose an option to perform operation";
        cin>>ch;

        switch(ch)
        {
            case 1:
            cout<<"Addition is"<<a+b; break;

            case 2:
            cout<<"Substraction is"<<a-b; break;
