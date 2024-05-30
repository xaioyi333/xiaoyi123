#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 100010;
int q;
int main()
{
	cin>>q;
	while(q--)
	{
		
		long long sk=1;
		string a,t;
		cin>>a>>t;
		int l=a.size();
		int n=t.size();
		int sg=t.find('a');
		
		if(t=="a") cout<<1<<endl;
		if(n==1&&t!="a") cout<<(sk<<l)<<endl;
		if(n>1&&sg!=-1)cout<<-1<<endl;
		if(n>1&&sg==-1) {
			cout<<(sk<<l)<<endl;
		}
		
	}
    return 0;
}

