#include<iostream>
#include<string>
using namespace std;
//联合体，不能使用字符串 
//成员共用一块内存（省内存）
//但不方便 
union Height{
	float m;
	int cm;
	int *p; 
}; 

int main(){
	
}
