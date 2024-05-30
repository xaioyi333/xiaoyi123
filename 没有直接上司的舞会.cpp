#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

const int N = 6010;
int n,happy[N];
int h[N],e[N],ne[N],idx;
int f[N][2];//f[u][0]����ѡu�ڵ�������˶ȣ�f[u][1]����ѡ��u�ڵ� 
bool has_father[N];
void add(int a,int b){//�ڽӱ� 
	e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}

void dfs(int u)
{//�ݹ鴦��ÿ��״̬ 
	f[u][1]=happy[u];
	for(int i=h[u];i!=-1;i=ne[i])
	{
		int j=e[i];//u��ÿ������
		dfs(j); 
		f[u][0]+=max(f[j][0],f[j][1]);
		f[u][1]+=f[j][0];
	}
} 
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++) scanf("%d",&happy[i]);
	
	memset(h,-1,sizeof(h));
	for(int i=0;i<n-1;i++)//n������n-1���� 
	{
		int a,b;
		scanf("%d%d",&a,&b);//b��a�ĸ��ڵ� 
		has_father[a]=true;
		add(b,a); 
	}
	int root=1;//���ڵ� 
	while(has_father[root]) root++;
	//�и��ڵ�������� 
	dfs(root);//�Ӹ��ڵ㿪ʼ���� 
	
	printf("%d\n",max(f[root][0],f[root][1]));
    return 0;
}

