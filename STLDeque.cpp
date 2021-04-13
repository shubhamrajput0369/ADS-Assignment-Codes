// Author: Shubham Bhagwansing Rajput
// CPP
#include<iostream>
#include<list>
using namespace std;

class STLDeque
{
    list<int>l;
    int val;

    public:
    void insert_front()
    {
        cout<<"\nInsert the Value at Front";
        cout<<"\nEnter Number";
        cin>>val;
        l.push_front(val);
    }
    void insert_rear()
    {
        cout<<"\nInsert the Value at End";
        cout<<"\nEnter Number";
        cin>>val;
        l.push_back(val);
    }
    void delete_front()
    {
        cout<<"\nDelete the Value from Front";
        val = l.front();
        cout<<"\nDeleted Value is : "<<val;
        l.pop_front();
    }
    void delete_rear()
    {
        cout<<"\nDelete the Value from Rear";
        val = l.back();
        cout<<"\nDeleted Value is : "<<val;
        l.pop_back();
    }
    void display()
    {
        list<int>::iterator i;

        cout<<"\nValues are : ";
        for(i=l.begin();i!=l.end();i++)
