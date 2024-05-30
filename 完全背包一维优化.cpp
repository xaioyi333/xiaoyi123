#include <bits/stdc++.h>
using namespace std;
//物品个数无限 
const int N = 1010;
int n,m;
int v[N],w[N];
int f[N];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>v[i]>>w[i];
	//一维优化 
	for(int i=1;i<=n;i++)
		for(int j=v[i];j<=m;j++)
		{
			f[j]=max(f[j],f[j-v[i]]+w[i]);
		}
	cout<<f[m]<<endl;
    return 0;
}
/*二维优化
for(int i=1;i<=n;i++)
	    for(int j=0;j<=m;j++)
	    {
	        f[i][j]=f[i-1][j];
	        if(j>=v[i]) f[i][j]=max(f[i-1][j],f[i][j-v[i]]+w[i]);
	    }
*/ 

