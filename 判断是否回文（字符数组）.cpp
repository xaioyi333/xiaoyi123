#include <iostream>
#include <string>
using namespace std;
int main(){
	char a[1000];
	int n=0,i=0;
	while((a[n]=getchar())!='\n'){
	                   //�ַ�ֻ�ܵ����� 
		n++;//���鳤�� 
	}
	n-=1;//�����Ӧ�±� 
	while(a[i]==a[n-i]){
		i++; 
	}
	if(i>n/2){
		cout<<"Yes";
		
	}
	else cout << "No";
	return 0; 
}
