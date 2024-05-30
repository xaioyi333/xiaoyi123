#include<iostream>
using namespace std;
int main(){
	int n=5;
	int a[n]={13,2,3,41,5};
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
			if(a[j]>a[j+1]){
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	} 
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
	return 0;
}
