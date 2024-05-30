#include<iostream> 
using namespace std;
typedef long long LL;

const int N = 100010;
int t;
LL f[N][N];
int main()
{
	for(int i=0;i<=1e5;i++) f[i][0]=1,f[0][i]=1;
	for(int i=1;i<=1e5;i++) 
		for(int j=1;j<=1e5;j++)
			f[i][j]=f[i-1][j]+f[i][j-1]+f[i-1][j-1];
	scanf("%d",&t);
	while(t--)
	{
		LL k,s;
		scanf("%d",&k);
		for(int i=0,j=k;i<=k&&j>=0;i++,j--)
			s+=f[i][j];
		s%=998244353;
		printf("%d",s);
	}
    return 0;
}

