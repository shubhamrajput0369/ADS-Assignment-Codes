// Author: Shubham Bhagwansing Rajput
// CPP

#include<iostream>
using namespace std;

template<class T>
void bubble_sort(T a[], int n)
{
    T temp=0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp = a[j+1];
                a[j+1] =  a[j];
                a[j] = temp;
            }
        }
    }
}

template<class S>
void display(S arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
}

int main()
{

    int arr[10] = {56, 34, 78, 23, 90, 12, 34, 23, 37, 92};
    float arr2[5] = {1.8, 3.6, 8.5, 9.3, 2.1};
