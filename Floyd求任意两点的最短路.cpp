#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N=210;
int n,m,q;
int g[N][N];
void floyd()
{
	for(int k=1;k<=n;k++)
		for(int i=1;i<=n;i++)
			for(int j=1;j<=n;j++)
			{
				g[i][j]=min(g[i][j],g[i][k]+g[k][j]);
			}
}
int main()
{
	cin>>n>>m>>q;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		{
			if(i==j) g[i][j]=0;
			else g[i][j]=1e9;
		}
	
	for(int i=1;i<=m;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		g[x][y]=min(g[x][y],z);
	}
	floyd();
	while(q--)
	{
		int x,y;
		cin>>x>>y;
		if(g[x][y]>1e9/2) puts("impossible");
		else cout<<g[x][y]<<endl;
	}
 	return 0;
}

