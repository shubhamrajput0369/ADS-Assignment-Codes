// Author: Shubham Bhagwansing Rajput
// CPP

#include <iostream>
using namespace std;
struct node{
	node *next;
	int data;
};
class adj{
	node *cn,*nn;
	int v,e;
	int i;
	int a[10][10];
    node *adl[10];
public:

	void adjM()
	{
		cout<<"\nEnter number of vertices and edges";
		cin>>v>>e;
		for(i=0;i<v;i++)
		{
			for(int j=0;j<v;j++)
			{
				a[i][j]=0;
			}
		}
		for(i=0;i<e;i++)
		{
			int m,n;
			cout<<"\nEnter m and n";
			cin>>m>>n;
			a[m][n]=1;
			a[n][m]=1;
		}

	}
	void dispM()
	{
		for(int i=0;i<v;i++)
		{
			for(int j=0;j<v;j++)
			{
		     cout<<a[i][j]<<" ";
		     }
			cout<<"\n";
		 }
	}
	void adjL()
	{
		cout<<"\nEnter number of vertices: ";
		cin>>v;
		for(int i=0;i<=v;i++)
		{
			adl[i]=NULL;
		}
		cout<<"\nEnter Number of Edges: ";
		cin>>e;
		for(int j=1;j<=e;j++)
		{
			int m,n;
			cout<<"\nEnter edge vertices: ";
			cin>>m>>n;
			add(m,n);
			add(n,m);
		}
		cout<<"edges added";
	}
	void add(int m,int n)
	{
		nn = new node;
		nn->data=n;
		nn->next=NULL;
		if(adl[m]==NULL)
			adl[m]=nn;
		else
		{
			cn=adl[m];
		    while(cn->next!=NULL)
		    	cn=cn->next;
		    cn->next=nn;
		}
	}
	void dispL()
	{
		for(int i=1;i<=v;i++)
		{
			cout<<"[ "<<i<<" ]";
			cn=adl[i];
			while(cn!=NULL)
			{
				cout<<" -> "<<cn->data;
				cn=cn->next;
			}
			cout<<"\n";
		}
	}
};

int main() {
	adj obj;
	int ch;
	do{
		cout<<"\n1.Input Matrix\n2.Display Matrix\n3.Input List\n4.Display List\n5.Exit";
	    cin>>ch;
	    switch(ch)
	    {
