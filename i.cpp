#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 100010;
set<int> a[1010];
int main()
{
	int n,m,q;
	cin>>n>>m>>q;
	for(int i=1;i<=n;i++) a[i].insert(i);
	while(m--)
	{
		int x, y;
		cin>>x>>y;
		a[x].insert(y),a[y].insert(x);
	}
	//for(int i=1;i<=n;i++)sort(a[i].begin(),a[i].end());
	while(q--)
	{
		int l,r,sg=0,r1=1005,r2=1005,sk;
		cin>>l>>r;
		if(l<r)
		for(int i=l;i<=r;i++)
		{
			if(a[i].size()>=2){
				for(int j=0;j<a[i].size();j++)
				{
					sk=*++(a[i].begin());
					if(*(a[i].begin())<i&&*(a[i].begin())>=l){
						//cout<<*(a[i].begin())<<' '<<i<<endl;
						r1=*(a[i].begin()),r2=i;
						sg=1;
						break;
					}
					if(sk>i&&sk<=r) {
						r1=min(i+j,r1);
						r2=min(r2,sk);
					}
				}
				
		    }
		    if(sg==1) break;
		} 
			
		if(sg==1) cout<<r1<<' '<<r2<<endl;
		if(sg==0) cout<<-1<<endl;
	}
    return 0;
}

