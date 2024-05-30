#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
const int N=1e9+10;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>n;
		cin>>a;
		b=a;
		reverse(a.begin(),a.end());
		cout<<min(b,a+b)<<endl;
	}
}
