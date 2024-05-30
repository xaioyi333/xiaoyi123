#include<iostream>
using namespace std;
// 10，二进制(1010)得到(10) 
//得到x二进制最后一位1和后面的0 
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
		//每次减去x的最后一位1
		cout<<res<<" "; 
	}
	 
} 
