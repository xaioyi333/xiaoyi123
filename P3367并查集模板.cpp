#include<iostream>
using namespace std;
const int N=10010;
int n,m;
int p[N];//x�ĸ��ڵ�Ϊp[x] 

//���� 
int find(int x)//����x�����ڽڵ� +·��ѹ�� 
{
	if(p[x]!=x) p[x]=find(p[x]); 
	return p[x];
} 
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++) p[i]=i;
	while(m--)
	{ 
		int a,b,op;
		scanf("%d%d%d",&op,&a,&b);
		
		if(op==1) p[find(a)]=find(b);
		else
		{
			if(find(a)==find(b)) puts("Y");
			else puts("N");
		}
	}
	return 0;
} 
