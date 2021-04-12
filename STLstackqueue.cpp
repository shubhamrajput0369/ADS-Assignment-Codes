// Author: Shubham Bhagwansing Rajput
// CPP

#include<iostream>
#include<stack>
#include<queue>
#include<list>

using namespace std;

void displaystack(list<int>a)
{
    int c;
    list<int>::iterator i;

    for(i=a.begin();i!=a.end();i++)
    {
        cout<<*i<<" ";
    }
}
void displayqueue(list<int>a)
{
    int c;
    list<int>::iterator i;

    for(i=a.begin();i!=a.end();i++)
    {
        cout<<*i<<" ";
    }
}

int main()
{
    int ch, n;
    char ans;

    list<int>s;
    list<int>q;

    do
    {
        cout<<"\n**********MENU**********\n1. PUSH Element into stack\n2. POP Element from stack\n3. DISPLAY element of STACK\n4. PUSH Element into QUEUE\n5. POP Element from QUEUE\n6. DISPLAY Element of QUEUE\n7. TOP Element of STACK\n8. LAST Element of QUEUE\n";
        cout<<"\nChoose Your Option to Perform Operation";
        cin>>ch;

        switch(ch)
        {
            case 1 :
            {
                cout<<"\nEnter Element";
                cin>>n;
                s.push_back(n);
                break;
            }
            case 2 :
            {
                n=s.back();
                cout<<"Popped Element is :\t"<<n;
                s.pop_back();
                break;
