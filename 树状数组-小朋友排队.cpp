#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
using namespace std;
typedef long long LL;
const int N = 1000010;
int n;
int h[N],tr[N];
int sum[N];
int lowbit(int x)
{
	return x&-x; 
} 
void add(int x,int v)
{
	for(int i=x;i<N;i+=lowbit(i)) tr[i]+=v;
}
int query(int x)
{
	int res=0;
	for(int i=x;i;i-=lowbit(i)) res+=tr[i];
	return res;
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++) 
	{
		scanf("%d",&h[i]);
		h[i]++;//h[i]可能等于0，相对大小不变 
	}
	// 每个数前面有多少个数比它大
	for(int i=0;i<n;i++)
	{
		sum[i]=query(N-1)-query(h[i]);
		add(h[i],1);
	}
	//每个数后面有多少个数比它小 
	memset(tr,0,sizeof(tr)); 
	for(int i=n-1;i>=0;i--)
	{
		sum[i]+=query(h[i]-1);
		add(h[i],1);
	}
	LL res=0;
	for(int i=0;i<n;i++) res+=(LL)sum[i]*(sum[i]+1)/2;
	cout<<res<<endl;
    return 0;
}

