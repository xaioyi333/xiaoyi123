#include<iostream>
using namespace std;

int main(){
	char a[]={'2','1','3'};
	char *p=a;
	for(int i=0;i<3;i++){
		p=a+i;
		cout<<(void*)p<<endl;
		//Ҫת���ɿ�ָ�����ͣ������޷������ַ,������ַ��� 
		//������printf 
		printf("%x\n",p); 
	}
}
