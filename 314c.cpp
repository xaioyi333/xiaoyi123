#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 200010;
int t;

int main()
{
	cin>>t;
	while(t--)
	{
		int sg=0;
		string s;
		int cnt=0;
		cin>>s;
		int n=s.length();
		for(int i=0;i<n-1;i++)
		{
			
			if(s[i]!=s[i+1]) cnt++;
		}
		for(int i=0;i<n;i++)if(s[i]=='?') sg++;
		if(n==1) {
			cout<<1<<endl;
			continue;
		}
		if(sg==n) cout<<n<<endl;
		else cout<<cnt+1<<endl;
		
	}
    return 0;
}

