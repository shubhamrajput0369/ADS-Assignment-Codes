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

