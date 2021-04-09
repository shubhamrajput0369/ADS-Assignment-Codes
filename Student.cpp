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
        void putData()
        {
            cout<<"\n\nStudent Roll Number:\t"<<rl<<"\nStudent Name:\t\t"<<name<<"\nStudent Age:\t\t"<<age;
        }
        static void displayTotal()
        {
            cout<<"\n\nTotal Number of Students:\t"<<total<<"\n\n";
        }
};

int Student::total=0;

int main()
{
    Student s[2];

    for(int i=0;i<2;i++)
    {
        s[i].getData();
    }
