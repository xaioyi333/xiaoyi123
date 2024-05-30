#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;

const int N = 510;
int n;
int a[N][N];
int f[N][N];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
			scanf("%d",&a[i][j]); 
	
	for(int i=1;i<=n;i++)
		for(int j=0;j<=i+1;j++)
			f[i][j]=-INF;
			
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
			f[i][j]=max(f[i-1][j-1],f[i-1][j])+a[i][j];
			
	int res=-INF;
	for(int i=1;i<=n;i++)
		res=max(f[n][i],res);		
	cout<<res<<endl;
    return 0;
}

