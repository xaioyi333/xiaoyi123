#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int N = 16;
int n;
int st[N];
//״̬����¼ÿ��λ�õ�ǰ��״̬��0��ʾ��û���ǣ�1��ʾѡ����2��ʾ��ѡ��
void dfs(int u)
{
	if(u>n)
	{
		for(int i=1;i<=n;i++)
			if(st[i]==1)
				printf("%d ",i);
		puts("");
		return;
	}
	st[u]=2;
	dfs(u+1);	//��һ����֧����ѡ 
	st[u]=0; //�ָ��ֳ�
	st[u]=1;
	dfs(u+1);	//�ڶ�����֧��ѡ 
	st[u]=0; //�ָ��ֳ� 
} 
int main()
{
	cin>>n;
	dfs(1);
    return 0;
}

