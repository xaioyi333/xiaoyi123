#include<iostream>
using namespace std;
int a[1100];
long long cnt;
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a[i];
		cnt+=a[i];
	}
	int b=cnt/n;
	if(m-b>1)cout<<0;
	else if(m-b==1)cout<<cnt-n*b;
	else if(m-b==0)cout<<m;
	
}
