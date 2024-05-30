#include<iostream>
#include<string>
using namespace std;
int q[9]={0,14,23,56,2,3,98,1,10};
int dp[10];
int main(){
	dp[1]=1;
	int ans=1;
	for(int i=2;i<9;i++){
		int max=0;
		for(int j=1;j<i;j++){
			if(q[i]>q[j] && dp[j]>max){
				max=dp[j];
			}
		}
		dp[i]=max+1;
		if(dp[i]>ans) ans=dp[i];
	}
	cout<<ans;
} 
