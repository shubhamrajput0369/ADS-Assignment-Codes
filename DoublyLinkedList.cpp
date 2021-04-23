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
