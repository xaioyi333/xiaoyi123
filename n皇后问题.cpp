#include<iostream>
using namespace std;
const int N=20;
int n;
char g[N][N];
bool col[N],dg[N],udg[N];
//皇后所在列，主对角线，副对角线  
//按行放（一行只有一个皇后 
void dfs(int u)
{
	if(u==n)
	{
		for(int i=0;i<n;i++) puts(g[i]);
		puts("");
		return;
	}
	for(int i=0;i<n;i++)
		if(!col[i]&&!dg[u+i]&&!udg[n-u+i])
		{
			g[u][i]='Q';
			col[i]=dg[u+i]=udg[n-u+i]=true;
			dfs(u+1);
			col[i]=dg[u+i]=udg[n-u+i]=false;
			g[u][i]='.';
		}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			g[i][j]='.';
	dfs(0);
	return 0;
}

