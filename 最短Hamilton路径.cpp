#include<iostream>
#include<algorithm>
#include<cstring> 
using namespace std;
const int N = 20,M=1<<N;
int n;
int w[N][N];//����Ȩ����ͼ 
int f[M][N];
//f[i][j]�����Ƶ�1��ʾ�����õ㵽��j
//�ܹ�����i��λΪ1�����е�,0��ʾû���� 
//ÿ���㾭��1����ֻ����1�� 
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++) 
			cin>>w[i][j];
	//��i����j�ľ���		
	memset(f,0x3f,sizeof(f));
	f[1][0]=0;
	for(int i=0;i<1<<n;i++)
		for(int j=0;j<n;j++)
			if(i>>j&1)
				for(int k=0;k<n;k++)
					if((i-(1<<j))>>k&1)
						f[i][j]=min(f[i][j],f[i-(1<<j)][k]+w[k][j]);
						
	cout<<f[(1<<n)-1][n-1]<<endl;
//��̵ľ������е��·������  
    return 0;
}

