#include<iostream>
#include<algorithm>
using namespace std;
const int N = 30;
int  n,m;
int way[N];
void dfs(int u,int start)
{//已经选了u-1个数，正在选第u个 
	if(u+n-start<m) return; 
	//剪枝，如果把后面的所有数都选上，都不够m个，当前分支一定无解 
	if(u==m+1)
	{
		for(int i=1;i<=m;i++) printf("%d ",way[i]);
		puts(""); 
	}
	for(int i=start;i<=n;i++)
	{
		way[u]=i;
		dfs(u+1,i+1);
		way[u]=0;//恢复现场 
	}
	
}
int main()
{
	scanf("%d%d",&n,&m);
	dfs(1,1);
    return 0;
}

