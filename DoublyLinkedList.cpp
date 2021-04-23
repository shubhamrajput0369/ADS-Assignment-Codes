// Author: Shubham Bhagwansing Rajput
// CPP

#include <iostream>
using namespace std;

struct node
{ int data;
  node *prev,*next;
};

struct node *head=NULL,*temp=NULL;

class dll
{public :int pos;
	void insert()
	{
	void insert()
			{
				node *nn= new node;
				cout<<"enter value:";
				cin>>nn->data;

				nn->next =NULL;
				nn->prev=NULL;
				if(head== NULL)
				{
					head = nn;
				}
				else
				{
					temp=head;
					while(temp->next!=NULL)
					{
						temp=temp->next;
					}
					{
						temp=temp->next;
					}
					temp->next=nn;
					nn->prev=temp;
				}
			}

	void insert_at_beg()
	{node *nn= new node;
	cout<<"enter value:";
