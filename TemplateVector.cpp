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
    void scalar_mult()
    {
        T a;

        cout<<"\nEnter the value that you want to perform scalar multiplication";
        cin>>a;

        for(int i=0;i<n;i++)
        {
            arr[i]*=a;
        }
        cout<<"Elements After Multiplication";
        display();
    }
    void modify()
    {
        T m, num;
        int flag=0;

        cout<<"Enter the value that you want to modify";
        cin>>m;

        for(int i=0;i<n;i++)
        {

            if(arr[i]==m)
            {
                cout<<"Enter new value";
                cin>>num;

                arr[i]=num;
                flag++;
                cout<<"After Modification Elements are";
                display();
            }
        }

            if(flag==0)
            {
                cout<<"Element is not found";
            }
    }
};
int main()
{
    int ch;
    char choice;

    Vector <int>v1;
    Vector <float>v2;
    Vector <long>v3;
    Vector <double>v4;

    do
    {
        cout<<"*******MENU********";
        cout<<"\n1. Integer Value\n2. Float Value\n3. Long Value\n4. Double Value";
        cout<<"\nEnter the value to perform operation";
        cin>>ch;
