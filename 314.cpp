#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 310;
int n,m,a[N],cnt;
int main()
{
	
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<n;i++)
	{
		
		while(a[i]-a[i+1]>=2&&i<n) 
		{
			a[i]-=1,a[i+1]+=1;
			cnt++;
		//	cout<<cnt<<endl<<"??";
		}
		
	}
	for(int i=n;i>=2;i--)
	{
		while(a[i]>a[i-1]) 
		{
			a[i]--;
			a[i-1]++;
			cnt++;
		}
	}
	cout<<cnt<<endl;
    return 0;
}

