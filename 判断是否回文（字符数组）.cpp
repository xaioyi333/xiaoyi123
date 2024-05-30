#include <iostream>
#include <string>
using namespace std;
int main(){
	char a[1000];
	int n=0,i=0;
	while((a[n]=getchar())!='\n'){
	                   //字符只能单引号 
		n++;//数组长度 
	}
	n-=1;//变成相应下标 
	while(a[i]==a[n-i]){
		i++; 
	}
	if(i>n/2){
		cout<<"Yes";
		
	}
	else cout << "No";
	return 0; 
}
