#include<bits/stdc++.h>
using namespace std;
const int N=200010;

int t;
int main()
{
	//cout<<(1041*1.0/1044+3*1.0/1044*0.65)*100;
	cin>>t;
	while(t--)
	{
		int a,b,s,d;
		cin>>a>>b>>s>>d;
		double a1,a2,c;
		//c=1.0/(a+b+c+d);
		a1=a*1.0/(a+b+s+d);
		a2=b*1.0/(a+b+s+d)*0.65;
		c=(a1+a2)*100;
		int sg=c*1000;
		
		
		int c1=c,c2=(c-c1)*1000;
//		int x=0;
//		x=c2%10;
//		if(x>=5) c2+=10;
		if(sg%10>=5) c2+=1;
		double cc=(double)c2/1000.0;
		//cout<<cc<<endl;
		double ans=cc+=(int)c1;
		printf("%.2lf\n",ans);
	}
}
