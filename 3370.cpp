#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
typedef unsigned long long ull;
const int N=10010,M=1510,P=131; 
ull a[N];
char str[M];
int n,cnt;
ull ha(char str[])
{
	ull ans=0;
	for(int i=1;i<=strlen(str);i++)
	{
		ans=ans*P+str[i];
	}
	return ans;
}
int main()
{
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		scanf("%s",str+1);
		a[i]=ha(str);
	} 
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		if(a[i]!=a[i+1]) cnt++;
	}
	cout<<cnt;
}
