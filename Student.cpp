// Author: Shubham Bhagwansing Rajput
// CPP

#include<iostream>
using namespace std;

class Student
{
    private:
        char name[30];
        int age,rl;
        static int total;

    public:
        void getData()
        {
            total++;
            rl=total;

            cout<<"\nEnter Student Name:-\t";
            cin>>name;

            cout<<"Enter Student Age:-\t";
            cin>>age;
        }
