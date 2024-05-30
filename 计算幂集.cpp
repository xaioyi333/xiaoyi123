#include <bits/stdc++.h>
using namespace std;

const int N = 100010;
int a[N];
int main()
{
	int n; 
	cin>>n; 
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<2<<n-1;i++)
	//选i个子集， 
	{
		int cnt=0;
		cout<<"{";
		for(int j=0;j<n;j++)
		{
			if(i>>j&1==1) {
				cout<<" {"<<a[j]<<"} ";
				cnt++;
				
				
			}
			
		}
		if(cnt==0) cout<<"{ }";
		cout<<"}";
		puts("");
	}	
    return 0;
}

