#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 1000010;
int t;
int main()
{
	cin>>t;
	while(t--)
	{
		int n,c1,c2,c3,c4,c5,f=0;
		cin>>n;
		string a;
		cin>>a;
		for(int i=0;i<n;i++)
		{
			if(a[i]=='m') c1++;
			if(a[i]=='a') c2++;
			if(a[i]=='p') c3++;
			if(a[i]=='i') c4++;
			if(a[i]=='e') c5++;
			
			if(a.substr(i,3)=="map"||a.substr(i,3)=="pie"&&a.substr(i,5)!="mapie") f++ ;
			if(a.substr(i,5)=="mapie") f++;
		}
		cout<<f<<endl;	
	}
    return 0;
}

