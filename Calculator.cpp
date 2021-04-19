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
