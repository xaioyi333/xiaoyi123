#include<iostream>
using namespace std;
void huan1(int &a,int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;	
}
void huan2(int a,int b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<a<<' '<<b;//ֱ��ִ��������� 
}
int main(){
	int a,b;
	cin>>a>>b;
	huan1(a,b);
	cout<<a<<' '<<b;//a,b��������main������ 
}
