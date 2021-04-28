// Author: Shubham Bhagwansing Rajput
// CPP

#include <iostream>
using namespace std;

typedef struct node
{
	int data;
	struct node*lf,*rt;
}node;

class bst
{
public:
	node*root;
	bst()
	{
		root=NULL;
	}
	void insert()
	{
		node*nn,*cn;
		nn=new node;
		cout<<"\n Enter the new value ";
		cin>>nn->data;
		nn->lf=nn->rt=NULL;
		if(root==NULL)
			root=nn;
		else
		{
			int temp = 0;
		    cn=root;
		    while(temp==0)
		    {
		    if(cn->data > nn->data)
		    {
		    	if(cn->lf==NULL)
		    	{
		    		temp=1;
		    	    cn->lf=nn;
		    	}
		        else
		        {
		    	cn=cn->lf;
		        }
		    }
		    else
		    	if(cn->rt==NULL)
		    	{
		    		temp=1;
		    		cn->rt=nn;
		    	}
		    	else
		    		cn=cn->rt;
		    }
		}
	}
	void displayPre(node*cn)
	{
		if(cn!=NULL)
		{
		    cout<<cn->data<<"  ";
		    displayPre(cn->lf);
	    	displayPre(cn->rt);
		}
	}
	void displayIn(node*cn)
	{
		if(cn!=NULL)
		{
			displayIn(cn->lf);
			cout<<cn->data<<"  ";
			displayIn(cn->rt);
		}
	}
	void displayPost(node*cn)
	{
		if(cn!=NULL)
		{
			displayPost(cn->lf);
			displayPost(cn->rt);
			cout<<cn->data<<"  ";
		}
	}
};
int main()
{
	bst obj;
	int choice;
		do
		{
			cout<<"\n enter your choice ";
			cout<<"\n 1. Insert ";
			cout<<"\n 2. pre order ";
			cout<<"\n 3. in order";
			cout<<"\n 4. post order";
			cout<<"\n 5. Exit";
			cin>>choice;
			switch(choice)
			{
			case 1:obj.insert();
			break;
