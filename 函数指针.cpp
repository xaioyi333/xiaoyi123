#include<iostream>
using namespace std;

int f(float a,int b){
	return a+b; 
}
#define n 100
typedef int(*qP)(float,int);
//�¶���һ��ָ������ָ�����
//���ֽ�   qP 
int main(){
	int (*p)(float a,int b);
	//ָ������ָ�� 
	p=f;
	qP q=f;
	cout<<p(2,3)<<endl;
	cout<<(*p)(3,5);
}
