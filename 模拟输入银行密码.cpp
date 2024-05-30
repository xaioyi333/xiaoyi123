#include <iostream>
using namespace std;
int main(){
	int pwd=12345678;
	int myPwd;
	int count=0;
	while(count<3 && myPwd!=pwd){
		cin>>myPwd;	
		count++;
		if(myPwd!=pwd){
			cout<<"Wrong password!";
	}
	if(count==3){
	
		cout<<"Your account is frozen!";
	}
}
}
	
