#include<iostream> 
using namespace std;
typedef long long LL;

const int N = 100010;
int t;
LL f[N][N];
LL fs(int k){
	LL cnt=0;
	if(k==1) return 2;
	else {
		for(int i=0;i<=k;i++)
		{
			for(int j=0;j<=k;j++)
			{
				if((i==0||j==0)&&i+j==k)cnt++;
				else if(i!=0&&j!=0&&i+j==k){
					cnt+=f[i-1][j]+f[i][j-1]+f[i-1][j-1];
				}
			}
		}
	}
	return cnt;
}
int main()
{
	scanf("%d",&t);
	while(t--)
	{
		int k,s;
		scanf("%d",&k);
		s=fs(k)%998244353;
	}
    return 0;
}

