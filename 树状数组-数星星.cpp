#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 32010;
int n,tr[N],level[N];
int lowbit(int x)
{
	return x&-x;
}
int add(int x)
{
	for(int i=x;i<N;i+=lowbit(i)) tr[i]++;
	//��������״���鴦�� 
}
int sum(int x)
{
	int res=0;
	for(int i=x;i>0;i-=lowbit(i)) res+=tr[i];
	//logn��ǰ׺��
	return res;
}
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int x,y;
		scanf("%d%d",&x,&y);
		x++;
		level[sum(x)]++;
		//ÿ����һ�����궼Ҫ������Ϊy��ͬ��x������ͬ 
		add(x);
	}
	for(int i=0;i<n;i++) printf("%d\n",level[i]);
    return 0;
}

