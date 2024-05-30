#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N = 6010;
int n,happy[N];
int h[N],e[N],ne[N],idx;
int f[N][2];//f[u][0]代表不选u节点的最大高兴度，f[u][1]代表选择u节点 
bool has_father[N];
void add(int a,int b){//邻接表 
	e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}

void dfs(int u)
{//递归处理每个状态 
	f[u][1]=happy[u];
	for(int i=h[u];i!=-1;i=ne[i])
	{
		int j=e[i];//u的每个儿子
		dfs(j); 
		f[u][0]+=max(f[j][0],f[j][1]);
		f[u][1]+=f[j][0];
	}
} 
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&happy[i]);
	
	memset(h,-1,sizeof(h));
	for(int i=0;i<n-1;i++)//n个点有n-1条边 
	{
		int a,b;
		scanf("%d%d",&a,&b);//b是a的父节点 
		has_father[a]=true;
		add(b,a); 
	}
	int root=1;//根节点 
	while(has_father[root]) root++;
	//有父节点就往上找 
	dfs(root);//从根节点开始搜索 
	
	printf("%d\n",max(f[root][0],f[root][1]));
    return 0;
}

