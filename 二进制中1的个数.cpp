#include<iostream>
using namespace std;
// 10��������(1010)�õ�(10) 
//�õ�x���������һλ1�ͺ����0 
int lowbit(int x)
{
	return x&-x;
}
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		int x;
		cin>>x;
		int res=0;
		while(x!=0) x-=lowbit(x),res++;
		//ÿ�μ�ȥx�����һλ1
		cout<<res<<" "; 
	}
	 
} 
