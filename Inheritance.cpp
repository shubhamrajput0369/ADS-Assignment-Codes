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

        cout<<"\nEnter the age ";
        cin>>age;
    }
    void putData()
    {
        cout<<"\nName of Student :- "<<name;
        cout<<"\nAge of Student :- "<<age;
    }
};
class Academic
{
    private:
    int roll;
    float per;

    public:

    void getData()
    {
        cout<<"\nEnter the roll number of student ";
        cin>>roll;
        cout<<"\nEnter the marks of the student ";
        cin>>per;
    }
    void putData()
    {
        cout<<"\nRoll Number :- "<<roll;
        cout<<"\nMarks of Student :- "<<per;
    }
};
class Professional
{
