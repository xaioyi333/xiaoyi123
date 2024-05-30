#include<iostream>
using namespace std;
const int N=10010; 
int n,m;
int a[N],b[N],s[N];
void insert(int l,int r,int k)
{
	b[l]+=k;
	b[r+1]-=k;
	s[r]+=(r-l+1)*k; 
}
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		s[i]=s[i-1]+a[i];
	}
	for(int i=1;i<=n;i++)
		insert(i,i,a[i]);
	while(m--)
	{
		
		int op,x,y;
		scanf("%d",&op);
		scanf("%d%d",&x,&y);
		if(op==1)
		{
			int k;
			scanf("%d",&k);
			insert(x,y,k);
		}
		else 
		{
			printf("%d\n",s[y]-s[x-1]);
		}
	}
}
