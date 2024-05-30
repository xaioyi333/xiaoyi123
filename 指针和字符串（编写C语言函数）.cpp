#include<iostream>

using namespace std;

//没有引入头文件，可以同名 
char * strcpy_(char *a,const char *b){
	char *p=a;
	while(*b){
		*a=*b;
		b++,a++;
	}
	*a='\0';
	return p;
}
int strcmp_(char *a,const char *b){
	int s;
	while(!(s=*a-*b)  && *b){
		a++,b++;
	}
	return s;
}
int strlen_(char *a){
	char *p = a;
	while(*p++){
	}
	return (p-a-1);
}
char a[100];

int main(){
	char b[10]={'a','b','c'};
	strcpy_(a,b);
	int n=strcmp_(a,"abc");
	cout<<a<<endl<<n<<' '<<strlen_(a);
	return 0;
}
