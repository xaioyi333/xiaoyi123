#include <iostream>   //��������������Ĵ��� 
using namespace std;
int main(){
	int n,s=0;
	cin>>n;  //����n=123 
	do{
		s*=10; //��һ�Ρ�s=0*10 ����s=3*10 ����s=32*10 
		s+=n%10;   // s=3       s=30+2      s=320+1
		n/=10;     // n=12      n=1        n=0
	} 
	while(n!=0);
	cout<<s; 
	return 0;  
}
