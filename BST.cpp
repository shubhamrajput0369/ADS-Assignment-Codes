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
