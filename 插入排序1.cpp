#include<iostream>
using namespace std;
int main(){
	int a[5]={1,7,3,5,4};
	for(int i=1;i<5;i++){
		int now=a[i],j;
		for(j=i-1;j>=0;j--){
			if(now<a[j]) a[j+1]=a[j];//全部往后移位 
			else break;
		}
		a[j+1]=now; 
	}
	for(int i=0;i<5;i++){
		cout<<a[i]<<" ";
	}
}
