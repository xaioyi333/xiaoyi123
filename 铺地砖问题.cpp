#include <bits/stdc++.h>
using namespace std;
const int N = 12,M=1<<N;
//二进制数表示第i列第j行是否铺过 
int n,m; 
long long f[N][M];
//前面控制列 后面控制行 
bool st[M];
//1*2、2*1的地砖铺 n*m的地面 总共方法数等于铺 1*2的方法数 
//按每一列处理 
int main()
{
	while(cin>>n>>m,n||m)
	{
		memset(f,0,sizeof f);
		for(int i=0;i<1<<n;i++)
		{
			st[i]=true;
			long long cnt=0;
			for(int j=0;j<n;j++)
				if(i>>j&1)
				{
					if(cnt&1) st[i]=false;
					//cnt是奇数 
				}
				else cnt++;
			if(cnt&1) st[i]=false;
		}
		f[0][0]=1;
		for(int i=1;i<=m;i++)
			for(int j=0;j<1<<n;j++)
				for(int k=0;k<1<<n;k++)
				{
					if((j&k)==0&&st[j|k])
						f[i][j]+=f[i-1][k];
				}
		cout<<f[m][0]<<endl; 
	}
    return 0;
}

