#include <iostream>
using namespace std;
struct node
{
	int data;
	node *next;
};
class sets
{
	node *hn;
public:	sets()
		{
			hn=NULL;
		}

		void insert(int x)
		{
			node *nn=new node;
			nn->data=x;
			nn->next=NULL;

			if(hn==NULL)
			{
				hn=nn;
			}

			else
			{
				node *cn=hn;
				while(cn->next!=NULL)
					cn=cn->next;
				cn->next=nn;
			}
		}

		void display()
		{

			if(hn==NULL)
				{
					cout<<"\nLIST EMPTY";
					return;
				}
				node *cn=hn;
				while(cn!=NULL)
				{
				cout<<cn->data<<"\t";
				cn=cn->next;
				}
		}

		void Del(int x)
		{
			node*temp;
					if(hn->data==x)
					{
						temp=hn;
						hn=hn->next;
						delete temp;
						cout<<"\nThe element "<<x<<" is deleted";
						return;
					}

