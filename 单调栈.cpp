#include<iostream>
using namespace std;
const int N=100010;
int n;
int stk[N],tt;
//��ÿ���� ��� �����һ���ȸ���С�� �� 
int main()
{
	//����ʱ���Ż� 
	//cin ���scanf
	//��cin.tie(0); 
	ios::sync_with_stdio(false); 
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		while(tt&& stk[tt]>=x) tt--;
		if(tt) cout<<stk[tt]<<" "; 
		else cout<<-1<<" ";
		stk[++tt]=x;
	}
} 
