#include<iostream>
#include<algorithm>
#include<cmath> 
using namespace std;
int t,n;
const int N=100010;
int a[N];
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	cin>>t;
	while(t--)
	{
		int s=0,c=0;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i]; 
			s+=a[i];

			if(a[i]==1) c=1;
		}
		if(s%3==0)cout<<0<<endl;
		else if(s%3==1&&c||n==1||s%3==2)
		{
			cout<<1<<endl;	
		}
		else cout<<2<<endl;	
	}
}
