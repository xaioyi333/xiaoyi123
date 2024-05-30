#include<iostream>
using namespace std;
struct Ttime{
	int h,m;
	Ttime operator+(const Ttime x)const{
		Ttime temp;
		temp.h=h+x.h+(m+x.m)/60;
		temp.m=(m+x.m)%60;
		return temp;
	}
};
Ttime a[100],sum;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].h>>a[i].m;
		sum=sum+a[i];
//'+' 和'+='是两个不同的运算符，‘+’才被重载过 
	}
	cout<<sum.h<<" "<<sum.m<<endl; 
}
