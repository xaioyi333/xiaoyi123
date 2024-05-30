#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

const int N = 110;
int n,s[N];
int f1[N][N],f2[N][N]; 
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	for(int i=1;i<=n;i++){
		s[i]+=s[i-1];
	}
	for(int len=2;len<=n;len++)
	{
		for(int i=1;i+len-1<=n;i++)
		{
			int l=i,r=i+len-1;
			f1[l][r]=1e8;
			
			for(int k=l;k<r;k++){
				
				f1[l][r]=min(f1[l][r],f1[l][k]+f1[k+1][r]+s[r]-s[l-1]);
				f2[l][r]=max(f2[l][k],f2[l][k]+f2[k+1][r]+s[r]-s[l-1]);
			} 
		}
	} 
	cout<<f1[1][n]<<endl<<f2[1][n];
    return 0;
}

