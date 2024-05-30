#include<iostream>
using namespace std;
//全部组合 
void f1(int n){
	for(int i=0;i<(1<<n);i++){
		for(int j=0;j<n;j++){
			if(i & (1<<j)){
				cout<<j<<" ";
			}
		}
		cout<<endl;
	}
}
//Cnm 部分组合
void f2(int n,int m){
	for(int i=0;i<(1<<n);i++){
		int num=0,kk=i;
		while(kk){
			kk=kk&(kk-1);
			num++;
		}
		if(num==m){
			for(int j=0;j<n;j++){
				if(i & (1<<j)){
				cout<<j<<" ";
				}
			}
			cout<<endl;
		} 
	}
} 
int main(){
	//f1(3);
	f2(5,3);
	return 0;
}
