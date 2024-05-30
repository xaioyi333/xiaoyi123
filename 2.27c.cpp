#include<iostream>
#include<algorithm>
#include<math.h>
#include<set>
using namespace std;
int t,n;
const int N=100;
int a[N],b11[2000],cnt;
int main()
{
	cin>>t;
	while(t--)
	{
		cnt=0;
		int a,b,l,k=0;
		cin>>a>>b>>l;
		set<int> s;
		for(int ax=1;l%ax==0;ax*=a)
			for(int by=1;l/ax%by==0;by*=b)
			{
				s.insert(l/ax/by);
			}
		cout<<s.size()<<endl;	
	}
}
