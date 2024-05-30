#include<iostream>
using namespace std;
int p[4]={0,1500,3000,2000};
int w[4]={0,1,4,3};
int a[10];
int main(){
	for(int i=1;i<=3;i++){
		for(int j=4;j>=w[i];j--){
			a[j]=max(a[j],a[j-w[i]]+p[i]);
		}
	}
	cout<<a[4];
} 
