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
