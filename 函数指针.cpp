#include<iostream>
using namespace std;

int f(float a,int b){
	return a+b; 
}
#define n 100
typedef int(*qP)(float,int);
//新定义一个指向函数的指针变量
//名字叫   qP 
int main(){
	int (*p)(float a,int b);
	//指向函数的指针 
	p=f;
	qP q=f;
	cout<<p(2,3)<<endl;
	cout<<(*p)(3,5);
}
