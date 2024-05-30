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
		int x,y,a=0,b=0;
		cin>>x>>y;
		if(y%x==0){
			b=y/x;
			a=1;
		}
		cout<<a<<' '<<b<<endl;
	}
    return 0;
}

