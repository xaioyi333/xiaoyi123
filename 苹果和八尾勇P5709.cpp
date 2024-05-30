#include <iostream>
#include <string>
using namespace std;
int main(){
	int m,t,s,b;
	double n;
	cin>>m>>t>>s;
	if(t!=0){
	
	n=(double)s/t;//只能在强制转换一个整型变量 
	b=s/t;  //否则只是把整型结果用实型结果表示 
	if(b<m){
	
	if(n>b){
		m=m-b-1;
	}
	else{
		m=m-b;
	}
	}
	else m=0;
	cout<<m;
	}
	else cout<<0;
	
	
}
