#include<iostream>
using namespace std;
int memo[100];
int f(int n,int *a){
	if(n==1||n==2)return 1;
	if(memo[n]!=0) return memo[n];
	else {
		memo[n]=f(n-1,memo)+f(n-2,memo);
		return memo[n];
	}
}
int f2(int n){
	if(n==1||n==2){
		return 1;
	}
	else return f2(n-1)+f2(n-2);
}
int main(){
	cout<<f(50,memo);
	//cout<<f2(40);
} 
