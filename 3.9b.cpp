#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 100010;
int t,n,a[N];

int main()
{
	cin>>t;
	while(t--)
	{
		int cnt[N]={0},aa=0,sg=0;
		set<int> s;
		cin>>n;
		for(int i=1;i<=n;i++) {
			cin>>a[i];
			cnt[a[i]]++;
			s.insert(a[i]);
		}
		aa=s.size();
		if((n-aa)%2==1)aa--;
		cout<<aa<<endl;
	}
    return 0;
}

