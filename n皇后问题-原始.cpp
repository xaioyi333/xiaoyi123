#include<iostream>
using namespace std;
const int N=20;
int n;
char g[N][N];
bool row[N],col[N],dg[N],udg[N];
//皇后所在行，列，主对角线，副对角线  
// 
void dfs(int x,int y,int s)
{
	if(y==n) y=0,x++;
	if(x==n)
	{
		if(s==n)
		{
			for(int i=0;i<n;i++) puts(g[i]);
			puts("");
		}
		return;//一定要 
	}
	//不放皇后
	dfs(x,y+1,s);
	
	//放皇后 
	if(!row[x]&&!col[y]&&!dg[x+y]&&!udg[x-y+n])
	{
		g[x][y]='Q';
		row[x]=col[y]=dg[x+y]=udg[x-y+n]=true;
		dfs(x,y+1,s+1);
		row[x]=col[y]=dg[x+y]=udg[x-y+n]=false;
		g[x][y]='.';
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			g[i][j]='.';
	dfs(0,0,0);
	return 0;
}

