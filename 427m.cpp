#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N=100010;
int main()
{
	long long a,b,h=0;
	cin>>a>>b;
	long long t1=0,t2=0,t3=0,k1=0,k2=0;
	k1=b/2500;
	if(k1==0) {
		if(b%1000==0&&b/1000<=a) t2=b/1000,t1=a-t2;
		else h=1;
	}
	else if(k1<=a) {
		t3=k1;
		if((b-2500*k1)%1000==0 && (b-2500*k1)/1000 <= a-t3)
			t2=(b-2500*k1)/1000,t1=a-t2-t3;
		else h=1;
	}
	else {
		h=1;
	}
	if(h) cout<<-1;
	else cout<<t1<<' '<<t2<<' '<<t3;
 	return 0;
}

