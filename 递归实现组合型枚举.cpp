#include<iostream>
#include<algorithm>
using namespace std;
const int N = 30;
int  n,m;
int way[N];
void dfs(int u,int start)
{//�Ѿ�ѡ��u-1����������ѡ��u�� 
	if(u+n-start<m) return; 
	//��֦������Ѻ������������ѡ�ϣ�������m������ǰ��֧һ���޽� 
	if(u==m+1)
	{
		for(int i=1;i<=m;i++) printf("%d ",way[i]);
		puts(""); 
	}
	for(int i=start;i<=n;i++)
	{
		way[u]=i;
		dfs(u+1,i+1);
		way[u]=0;//�ָ��ֳ� 
	}
	
}
int main()
{
	scanf("%d%d",&n,&m);
	dfs(1,1);
    return 0;
}

