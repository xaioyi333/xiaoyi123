#include<iostream>
#include<algorithm>
using namespace std;
const int N = 10;
int n;
int state[N];// 0��ʾ��û������1~n��ʾ�����ĸ��� 
bool used[N];// true��ʾ�ù���false��ʾ��δ�ù� 
void dfs(int u)
{
	if(u>n)//�߽� 
	{
		for(int i=1;i<=n;i++) printf("%d ",state[i]);//��ӡ���� 
		puts("");
		return;
	}
	//����ö��ÿ����֧������ǰ��������Щ�� 
	for(int i=1;i<=n;i++)
		if(!used[i])
		{
			state[u]=i;
			used[i]=true;
			dfs(u+1);
			//�ָ��ֳ� 
			state[u]=0;
			used[i]=false;
		}
} 
int main()
{
	scanf("%d",&n);
	dfs(1);
    return 0;
}

