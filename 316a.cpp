#include<iostream>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 100010;
int t;
LL f[N];

int main()
{
	f[1]=1;
	for(int i=2;i<=1e5;i++) {
		f[i]=2f[i-1]+f[i-2]
	}
	scanf("%d",&t);
	while(t--)
	{
		int k,s;
		scanf("%d",&k);
		(LL)s=f[k]%998244353;
	}
    return 0;
}

