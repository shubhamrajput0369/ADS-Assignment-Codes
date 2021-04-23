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
{
	public :int pos;
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
			temp->next=nn;
			nn->prev=temp;
		}
	}

	void insert_at_beg()
	{
		node *nn= new node;
		cout<<"enter value:";

		cin>>nn->data;
		nn->next =NULL;
		nn->prev=NULL;
		if(head==NULL)
		head=nn;
		else
		nn->next=head;
	    	head->prev=nn;
	    	head=nn;
	}

	void insert_at_end()
	{
		node *nn= new node;
		cout<<"enter value:";
		cin>>nn->data;
		nn->next =NULL;
		nn->prev=NULL;
		if(head==NULL)
		head=nn;
		else
		{
			temp=head;
			while(temp->next!=NULL)
			{
				temp=temp->next;
			}

			temp->next=nn;
			nn->prev=temp;
			nn->next=NULL;
		}
	}

	void insert_at_pos()
	{
		node *nn= new node;
		cout<<"enter value:";
		cin>>nn->data;
		nn->next =NULL;
		nn->prev=NULL;
		if(head==NULL)
		head=nn;
		else
		temp=head;
	 	cout<<"enter position to insert a node!";
	 	cin>>pos;
	 	for(int i=1;i<pos-1;i++)
		temp=temp->next;

	 	nn->prev=temp;
	 	nn->next=temp->next;
	 	temp->next=nn;
	 	nn->next->prev=nn;
	}

	void display()
	{
		if(head==NULL)
		{
			cout<<"\n Empty doubly linked List! ";
		}
		else
		{
			temp=head;
			while(temp!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
		}
	}
};
int main()
{
	dll l;
	int ch;
	do{
		cout<<"\n1.Insert";
		cout<<"\n2.insert_beg";
		cout<<"\n3.insert_pos";
		cout<<"\n4.insert_end";
		cout<<"\n5.display";
		cout<<"\n Enter your choice : ";
		cin>>ch;
		switch(ch)
		{
			case 1:l.insert();
			break;

			case 2: l.insert_at_beg();
				break;

				case 3: l.insert_at_pos();
				break;

				case 4: l.insert_at_end();
				break;

				case 5: l.display();
				break;
			}

			}while(ch<=5);
		return 0;
		}
