#include <bits/stdc++.h>
using namespace std;

const int N = 110;
int a[N][N];
int b[N][N]; 
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
			b[i][j]=b[i][j-1]+b[i-1][j]-b[i-1][j-1]+a[i][j];
			//�����ǰ׺�� 
		}
	}
	int l=1,ans=0;
	while(l<=min(n,m)) 
	{
		for(int i=l;i<=n;i++)
		{
			for(int j=l;j<=m;j++)
				if(b[i][j]-b[i-l][j]-b[i][j-l]+b[i-l][j-l]==l*l) 
					ans=max(ans,l);
		}
		l++;	
	}
	cout<<ans<<endl;
    return 0;
}

