#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 110;
int t; 
int main()
{
	cin>>t;
	while(t--)
	{
		int a[N]={0},b[N]={0},cnt=0;
		int n,m,k;
		cin>>n>>m>>k;
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=m;i++) cin>>b[i];
		for(int i=1;i<=n;i++)
			for(int j=1;j<=m;j++)
			{
				if(a[i]+b[j]<=k) cnt++;
			}
		cout<<cnt<<endl;
	}
    return 0;
}

