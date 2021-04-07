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

