#include<iostream>
using namespace std;
const int N=100010;
int n;
int stk[N],tt;
//找每个数 左边 最近的一个比该数小的 数 
int main()
{
	//读入时间优化 
	//cin 变成scanf
	//加cin.tie(0); 
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
