#include <iostream>
using namespace std;
int f(int n){ //�ݹ麯���Լ������Լ� 
	if(n==1) return 1;
	if(n==2) return 2;
	if(n>2) return f(n-1)+f(n-2);
	
}
int main(){
	cout<<f(10)<<endl;
	cout<<f(1);
	return 0;
} 
