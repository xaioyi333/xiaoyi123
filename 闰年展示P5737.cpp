#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int x,y,num=0;
	cin>>x>>y;
	for(int i=x;i<=y;i++){
		if((i%4==0 && i%100!=0) || i%400==0)
		num++;
	}
	cout<<num<<endl;
	for(int i=x;i<=y;i++){
		if((i%4==0 && i%100!=0) || i%400==0)
		cout<<i<<' ';
	}
}
