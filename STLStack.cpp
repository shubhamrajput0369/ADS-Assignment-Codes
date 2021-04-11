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

        mystack.push(30);
        cout<<"\nAdding Element into stack : "<<mystack.top();

        mystack.push(40);
        cout<<"\nAdding Element into stack : "<<mystack.top();

        mystack.push(50);

        cout<<"\nAdding Element into stack : "<<mystack.top();

        cout<<"\nSize of stack is : "<<mystack.size();
        if(!mystack.empty())
        {
            cout<<"\nStack is not empty";
        }
        cout<<"\nPopped Element of stack :"<<mystack.top();
        mystack.pop();
