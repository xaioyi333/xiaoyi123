#include<iostream>
using namespace std;
const int N=20;
typedef long long LL;
int n,m;
int p[N];

int main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++) cin>>p[i];
	int res=0;
	for(int i=1;i<1<<m;i++)
	{//��ʾ�ܱ���������1λ�ö�Ӧ��p[j]���� 
		int t=1,cnt=0;//������t 
		for(int j=0;j<m;j++)
		if(i>>j&1)
		{
			cnt++;//�ܱ�cnt�������������� 
			if((LL)t*p[j]>n)
			{
				t=-1;
				break;
			}
			t*=p[j];
		}
		if(t!=-1)
		{
			if(cnt%2) res+=n/t;
			else res-=n/t;
		}
	}
	cout<<res<<endl;
	return 0;
} 
