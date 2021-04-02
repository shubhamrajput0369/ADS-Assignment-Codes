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
		for(i=1;i<=V;++i)
			for (j=1;j<=V;++j)
				G[i][j]=INF;
		cout<<"\n Enter number of edges ";
		cin>>E;
		for(i=0;i<E;++i)
		{
			int m,n;
			cout<<"\n Enter start and end vertex and its cost :";
			cin>>m>>n>>cost;
			G[m][n]=cost;
			G[n][m]=cost;
		}
	}
	void primsfunc()
	{
		int min;
		int lowcost[MAX];
		int from[MAX];
		int visited[MAX];
		cout<<"\n Minimum spanning tree ";
		int mincost=0;
		for(int i=1;i<=V;i++)
		{
			lowcost[i]=G[1][i];
			from[i]=1;
			visited[i]=0;
		}
		visited[1]=1;
		for(int i=1;i<V;++i)
		{
			int vertex;
			min=INF;
			for (int j=2;j<=V;++j)
			{
				if(!visited[j]&&(min>lowcost[j]))
				{
					min=lowcost[j];
					vertex=j;
				}
			}

			visited[vertex]=1;
			for (int j=1;j<=V;++j)
			{
				if(!visited[j] && (G[vertex][j]+lowcost[vertex])<lowcost[j])
				{
					lowcost[j]=G[vertex][j]+lowcost[vertex];
					from[j]=vertex;
				}
			}
			cout<<"\nVertex:"<<vertex<<"\ncost:"<<lowcost[vertex];
		}

	}
};
int main()
