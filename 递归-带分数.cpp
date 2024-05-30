#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 30;
int n,ans; 
bool st[N],backup[N];
bool check(int a,int c)
{
	long long b=n*(long long)c-a*c;
	if(!a||!b||!c) return false;
	memcpy(backup,st,sizeof(st)); 
	while(b)
	{
		int t=b%10;
		b/=10;
		if(!t||backup[t]) return false;	
		backup[t]=1;
	} 
	for(int i=1;i<=9;i++){
		if(!backup[i]) return false;
	}
	return true;
}
void dfs_c(int x,int a,int c)
{
	if(x>=10) return;
	if(check(a,c)) ans++;
	for(int i=1;i<=9;i++)
		if(!st[i])
		{
			st[i]=1;
			dfs_c(x+1,a,c*10+i);
			st[i]=0;
		}
}
void dfs_a(int x,int a)
{
	if(a>=n)return;
	if(a) dfs_c(x,a,0);
	
	for(int i=1;i<=9;i++)
		if(!st[i])
		{
			st[i]=1;
			dfs_a(x+1,a*10+i);
			st[i]=0;
		} 
}
int main()
{
	scanf("%d",&n);
	dfs_a(0,0);
	printf("%d\n",ans);
    return 0;
}

