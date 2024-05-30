#include<iostream>
using namespace std;

int main(){
	char a[]={'2','1','3'};
	char *p=a;
	for(int i=0;i<3;i++){
		p=a+i;
		cout<<(void*)p<<endl;
		//要转换成空指针类型，否则无法输出地址,会输出字符串 
		//或者用printf 
		printf("%x\n",p); 
	}
}
