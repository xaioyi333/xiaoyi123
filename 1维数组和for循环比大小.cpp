#include<iostream>
using namespace std;
int main(){
	int a[10],h,s=0;
	for(int i=0;i<10;i++){
		cin>>a[i];
	}
	cin>>h;
	for(int i=0;i<10;i++){
		if(h>=a[i]){
			s+=1;
		} 
	}
	cout<<s;
	return 0;
} 
