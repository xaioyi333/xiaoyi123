#include <iostream>
using namespace std;
int main(){
	int a=10;
	int &i=a;//�൱�ڸ�aȡһ�����,��i 
	i++;
	int *p;
	p=&a;
	cout<<i<<endl<<a;
	cout<<endl<<&a<<endl<<&i;
	cout<<endl<<*p;
	return 0;
} 
