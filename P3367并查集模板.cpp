#include<iostream>
using namespace std;
const int N=10010;
int n,m;
int p[N];//x的父节点为p[x] 

//核心 
int find(int x)//返回x的祖宗节点 +路径压缩 
{
	if(p[x]!=x) p[x]=find(p[x]); 
	return p[x];
} 
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) p[i]=i;
	while(m--)
	{ 
		int a,b,op;
		scanf("%d%d%d",&op,&a,&b);
		
		if(op==1) p[find(a)]=find(b);
		else
		{
			if(find(a)==find(b)) puts("Y");
			else puts("N");
		}
	}
	return 0;
} 
