#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 55;
int n,t;
int a[N];
int main()
{
	cin>>t;
	while(t--)
	{
		int l,r,a,m;
		
		cin>>l>>r>>a;
		int ll=l/a,rr=r/a;
		if(rr-ll>=1) m=max(rr-1+a-1,rr+r%a);
		else m=rr+r%a;
		cout<<m<<endl;
	} 
    return 0;
}

