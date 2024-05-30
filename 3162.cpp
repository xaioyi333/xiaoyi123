#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 200010;
int t,a[N];
int main()
{
	cin>>t;
	while(t--)
	{
		set<int> b;
		int n;
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>a[i];
			b.insert(a[i]);
		}
		int sg=*(--(b.rbegin()));
		sort(a+1,a+n+1);
		if(n==1&&a[1]>1) cout<<"NO"<<endl;
		if(n==1&&a[1]==1) cout<<"YES"<<endl;
		if(n>1&&a[n]-sg>=2) cout<<"NO"<<endl;
		if(n>1&&a[n]-sg<2) cout<<"YES"<<endl;
		
	}
    return 0;
}

