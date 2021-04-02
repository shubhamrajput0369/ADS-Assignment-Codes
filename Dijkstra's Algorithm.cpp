// Author: Shubham Bhagwansing Rajput
// CPP

#include <iostream>
#define MAX 20
#define INF 999
using namespace std;

class prims
{

public:
	int V,E;
	int G[MAX][MAX];
	void init()
	{
		int cost,i,j;
		cout<<"\n Enter number of vertex ";
		cin>>V;
