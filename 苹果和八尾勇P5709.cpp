#include <iostream>
#include <string>
using namespace std;
int main(){
	int m,t,s,b;
	double n;
	cin>>m>>t>>s;
	if(t!=0){
	
	n=(double)s/t;//ֻ����ǿ��ת��һ�����ͱ��� 
	b=s/t;  //����ֻ�ǰ����ͽ����ʵ�ͽ����ʾ 
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
