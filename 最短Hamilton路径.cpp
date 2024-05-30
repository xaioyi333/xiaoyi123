#include<iostream>
#include<algorithm>
#include<cstring> 
using namespace std;
const int N = 20,M=1<<N;
int n;
int w[N][N];//带边权无向图 
int f[M][N];
//f[i][j]二进制的1表示经过该点到点j
//总共经过i中位为1的所有点,0表示没经过 
//每个点经过1次且只经过1次 
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++) 
			cin>>w[i][j];
	//点i到点j的距离		
	memset(f,0x3f,sizeof(f));
	f[1][0]=0;
	for(int i=0;i<1<<n;i++)
		for(int j=0;j<n;j++)
			if(i>>j&1)
				for(int k=0;k<n;k++)
					if((i-(1<<j))>>k&1)
						f[i][j]=min(f[i][j],f[i-(1<<j)][k]+w[k][j]);
						
	cout<<f[(1<<n)-1][n-1]<<endl;
//最短的经过所有点的路径长度  
    return 0;
}

