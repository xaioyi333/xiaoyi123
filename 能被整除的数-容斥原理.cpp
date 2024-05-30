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
	{//表示能被二进制中1位置对应的p[j]整除 
		int t=1,cnt=0;//除数是t 
		for(int j=0;j<m;j++)
		if(i>>j&1)
		{
			cnt++;//能被cnt个质数整除的数 
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
