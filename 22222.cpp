#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=1010;
LL s[N],m,ss[N],cnt;
LL w(int x)
{
	int b=1;
	while(x){
		b*=x%10;
		x/=10;
	}
	return b;
}
LL f(int x){
	LL cnt=0;
	while(x>=10) {
		x=w(x);
		cnt++;
	}
	return cnt;
}
int main()
{
	int a,b;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		s[i]=f(i);
		m=max(m,s[i]);
	}
	cout<<m<<endl;
	int k=0;
	for(int i=a;i<=b;i++)
	{
		if(s[i]==m){
			ss[k]=i;
			k++;
		}
	}
	for(int i=0;i<k;i++){
		if(ss[i]) cout<<ss[i];
		if(i<k-1)cout<<" ";
	} 
	
}
