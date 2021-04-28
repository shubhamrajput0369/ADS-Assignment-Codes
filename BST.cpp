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
