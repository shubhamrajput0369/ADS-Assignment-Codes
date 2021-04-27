// Author: Shubham Bhagwansing Rajput
// CPP

#include<iostream>
#define MAX 20
#define INF 999
using namespace std;

class PrimsAlg
{
	public:
	int V,E;
	int G[MAX][MAX];
	void create()

	{
		int cost,i,j;
		cout<<"\n Enter number of vertex ";
		cin>>V;
		for(i=1;i<=V;++i)
