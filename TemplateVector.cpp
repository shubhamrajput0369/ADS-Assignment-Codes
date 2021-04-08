// Author: Shubham Bhagwansing Rajput
// CPP

#include<iostream>
using namespace std;

template<class T>
class Vector
{
    private:
    T arr[100];
    int n;

    public:
    void accept()
    {
        cout<<"Enter the number of elements want to enter";
        cin>>n;

        cout<<"Enter Values";
        for(int i=0;i<n;i++)
        {cout<<"Enter Values";
            cin>>arr[i];
        }
    }
    void display()
    {
        cout<<"Elements of Vector are :-  {";

        for(int i=0;i<n;i++)
                cout<<arr[i]<<" ";

        cout<<"}";
    }
 
