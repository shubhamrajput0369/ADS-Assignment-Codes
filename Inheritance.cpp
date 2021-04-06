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
    private:
    char branch[30];
    char field[30];

    public:
    void getData()
    {
        cout<<"\nEnter the branch name of student ";
        cin>>branch;
        cout<<"\nEnter the study field of the student ";
        cin>>field;
    }
    void putData()
    {
        cout<<"\nBranch of student :- "<<branch;
        cout<<"\nField of Study :- "<<field;
    }
};
class Biodata: public Personal, Academic, Professional
{

    public:
    void getData()
    {
        Personal::getData();
        Academic::getData();

        Professional::getData();
    }
    void putData()
    {
        Personal::putData();
        Academic::putData();
        Professional::putData();
    }
};
int main()
{
    Biodata b;
    cout<<"*****INFORMATION of STUDENT*****";
    b.getData();
    b.putData();
    return 0;
}
