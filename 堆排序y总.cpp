#include<iostream>
using namespace std;
const int N=100010;
int n,m;
int h[N],size;

void down(int u)
{
	int t=u;
	if(u*2<=size&&h[u*2]<h[t]) t=u*2;
	if(u*2+1<=size&&h[u*2+1]<h[t]) t=2*u+1;
	if(t!=u)
	{
		swap(h[t],h[u]);
		down(t);
	}
}
void up(int u)
{
	while(u/2&&h[u/2]>h[u])
	{
		swap(h[u/2],h[u]);
		u/=2;
	}
} 
int main()
{
	scanf("%d%d",&n,&m);
	size=n;
	for(int i=1;i<=n;i++)
		scanf("%d",&h[i]); 
	for(int i=n/2;i;i--) down(i);
	while(m--)
	{
		printf("%d ",h[1]);
		h[1] = h[size];
		size--;
		down(1);
	}
	return 0;
}
