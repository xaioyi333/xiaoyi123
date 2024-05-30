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
	while(t--){
		int a,b,c,x,y;
		cin>>a>>b>>c>>x>>y;
		if(x>a+c||y>b+c||a+b+c<x+y) cout<<"NO"<<endl;
		else if(a+c-x+b>=y||b+c-y>=x) cout<<"YES"<<endl;
	} 
    return 0;
}

