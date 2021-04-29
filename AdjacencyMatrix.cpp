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
