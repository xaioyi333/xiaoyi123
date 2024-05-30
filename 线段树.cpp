#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
const int N = 100010;
int n,m;
int w[N];
struct Node
{
	int l,r;
	int sum;
}tr[N*4];
void pushup(int u)
{
	tr[u].sum=tr[u<<1].sum+tr[u<<1|1].sum;
}
void build(int u,int l,int r)
//建立线段树 
{
	if(l==r) tr[u]={l,r,w[r]};
	else
	{
		tr[u]={l,r};
		int mid=l+r>>1;
		build(u<<1,l,mid),build(u<<1|1,mid+1,r);
		//建立左儿子2x,右儿子2x+1 
		pushup(u);
	}
}
int query(int u,int l,int r)//求区间[l,r]的和
//根节点编号 ，区间 
{
	if(tr[u].l>=l&&tr[u].r<=r) return tr[u].sum;
	int mid=tr[u].l+tr[u].r>>1;
	int sum=0;
	if(l<=mid) sum=query(u<<1,l,r);
	if(r>mid) sum+=query(u<<1|1,l,r);
	return sum;
}
void modify(int u,int x,int v)
{//修改操作 
	if(tr[u].l==tr[u].r) tr[u].sum+=v;
	else
	{
		int mid=tr[u].l+tr[u].r>>1;
		if(x<=mid) modify(u<<1,x,v);
		else modify(u<<1|1,x,v);
		pushup(u);
	}
}
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) scanf("%d",&w[i]);
	build(1,1,n);
	int k,a,b;
	while(m--)
	{
		scanf("%d%d%d",&k,&a,&b);
		if(k==0) printf("%d\n",query(1,a,b));
		else modify(1,a,b); 
	}
    return 0;
}

