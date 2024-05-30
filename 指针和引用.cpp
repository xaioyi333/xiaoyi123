#include <iostream>
using namespace std;
int main(){
	int a=10;
	int &i=a;//相当于给a取一个外号,叫i 
	i++;
	int *p;
	p=&a;
	cout<<i<<endl<<a;
	cout<<endl<<&a<<endl<<&i;
	cout<<endl<<*p;
	return 0;
} 
