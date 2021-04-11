// Author: Shubham Bhagwansing Rajput
// CPP

#include<iostream>
#include<stack>
#include<iterator>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    stack<int>mystack;

        if(mystack.empty())
        {
            cout<<"\nStack is Empty";
        }
        mystack.push(10);
        cout<<"\nAdding Element into stack : "<<mystack.top();

        mystack.push(20);
        cout<<"\nAdding Element into stack : "<<mystack.top();

