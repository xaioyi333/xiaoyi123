#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
using namespace std;
const int N=1000010;
typedef pair<int,int> PII;
map<PII,int> m;

#define first x
#define second y
long long cnt[N],c;
long long f(int u,int v)
{
	 
	return (cnt[u]^cnt[v])%998244353*(cnt[u]|cnt[v])%998244353*(cnt[u]&cnt[v])%998244353;
 } 
int main()
{
	memset(-1,m,1e6);
	int n,m;
	
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int u,v;
		cin>>u>>v;
		cnt[u]++,cnt[v]++;
		//h={{cnt[u],cnt[v]},}
	}
	for(int i=1;i<=n;i++)
		for(int j=i;j<=n;j++)
		{
			if(i==j) continue;
			c+=f(i,j)%998244353;
			c=c%998244353;
		}
	cout<<c;
 	return 0;
}

