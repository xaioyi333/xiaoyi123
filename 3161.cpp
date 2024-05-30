#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 100010;
int t;
int main()
{
	cin>>t;
	while(t--)
	{
		long long s=0;
		int a,b;
		cin>>a>>b;
		s=a+(2*b-a+1)/2+(a+2*b)/3+1;
		cout<<s<<endl;
	}
    return 0;
}

