#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double a,b,c,d,e,f;
	double c1,c2,c3,s;
	cin>>a>>b>>c>>d>>e>>f;
	c1=sqrt((c-a)*(c-a)+(d-b)*(d-b));
	c2=sqrt((e-a)*(e-a)+(f-b)*(f-b));
	c3=sqrt((e-c)*(e-c)+(f-d)*(f-d));
	s=c1+c2+c3;
	printf("%.2lf\n",s);
}
