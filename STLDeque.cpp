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
        {
            cout<<*i<<" ";
        }
    }
};

int main()
{
    int ch;
    char ans;
    STLDeque D;
    do
    {
        cout<<"\n**********MENU**********\n1. Insert at Front\n2. Insert at Rear \n3. Delete from Front\n4. Delete from Rear\n5. Display \n6. Exit";
        cout<<"\nChoose an Option for Performing Operation";
        cin>>ch;

        switch(ch)
        {
            case 1:D.insert_front();
                    break;

            case 2:D.insert_rear();
                    break;

            case 3:D.delete_front();
                    break;

            case 4:D.delete_rear();
                    break;

            case 5:D.display();
                    break;

            case 6:return 0;
                    break;

            default: cout<<"\nInvalid Input";
        }
        cout<<"\nDo You Want to Continue?";
        cin>>ans;
    }while(ans=='Y'||ans=='y');
return 0;
}
