// Author: Shubham Bhagwansing Rajput
// CPP

#include<iostream>
using namespace std;

class Personal
{
    private:
    char name[30];
    float marks;
    int age;

    public:
    void getData()
    {
        cout<<"\nEnter the name of student ";
        cin>>name;
