#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N=100010;
int n;
int cnt[N];
int main()
{
	string a,b;
	cin>>a>>b;
	int k1,k2,c=0;
	for(int i=0;i<a.size();i++){
		if(c==0&&a[i]!=b[i]) k1=i,c++;
		if(c==1&&a[i]!=b[i]) k2=i;
	}
	cout<<k2-k1;
	
 	return 0;
}

