#include<iostream>
#include<cstring>
using namespace std;
int cnt[26];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(cnt,0,sizeof(cnt));
		int n,num=0;
		cin>>n;
		char a[100];
		for(int i=0;i<n;i++){
			cin>>a[i];
			cnt[a[i]-65]++;
		}
		for(int i=0;i<26;i++)
		{
			if(cnt[i]) num+=cnt[i]+1;
		} 
		cout<<num<<endl;
	}
}
