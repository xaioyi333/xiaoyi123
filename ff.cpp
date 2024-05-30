#include<bits/stdc++.h>
using namespace std;
const int mod=998244353,N=100010;

int cnt1[N]	,cnt2[N];
int main()
{

	int n;
	cin>>n;
	while(n--)
	{
		int a,b;
		cin>>a>>b;
		cnt1[a]++,cnt2[b]++;
	}
	sort(cnt1,cnt1+sizeof(cnt1));
	sort(cnt2,cnt2+sizeof(cnt2));
	int m=0;
	for(int i=0;i<100000;i++){
		if(cnt1[i]>=1 && cnt2[i]>=1) m++;
	}
	cout<<m<<endl;
}
