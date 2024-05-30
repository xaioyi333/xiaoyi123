#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 100010;
int n;
int f[N];
int main()
{
	cin>>n;
	int res=0;
	for(int i=0;i<n;i++)
	{
		
		string s;
		cin>>s;
		int l=s[0]-'0',r=s[s.size()-1]-'0';
		
		f[r]=max(f[l]+1,f[r]);
		res=max(res,f[r]);
	}
	cout<<n-res<<endl;
    return 0;
}

