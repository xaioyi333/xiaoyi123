#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 100010;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int cnt=0;
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if(b>a) cnt++;
		if(c>a) cnt++;
		if(d>a) cnt++;
		cout<<cnt<<endl;
	 } 
    return 0;
}

