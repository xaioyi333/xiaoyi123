#include<iostream>
using namespace std;
const int N=1000010;

int main()
{
	double x;
	cin>>x;
	double l=0,r=x; 
	//没有边界问题 
	while(r-l>1e-8)
	{
		double mid=(l+r)/2;
		if(mid*mid>=x) r=mid;
		else l=mid;
	}
	printf("%lf\n",l);
	return 0;
}
