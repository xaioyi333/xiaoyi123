#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 110;
int t,a[N];
int main()
{
	cin>>t;
	while(t--)
	{
		int n,cnt=0,sg=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=n-2;i>=0;i--)
		{
			
			while(a[i]>=a[i+1]) {
				a[i]/=2;
				cnt++;
				if(a[i]==0&&a[i+1]==0) {
					sg=1;break;
				}
			}
		}
		if(!sg) cout<<cnt<<endl;
		else cout<<-1<<endl;
	 } 
    return 0;
}

