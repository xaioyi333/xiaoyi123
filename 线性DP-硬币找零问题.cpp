#include<iostream>
using namespace std;
int coins[3]={5,2,1};
int dp[12];
int main(){
	for(int i=1;i<12;i++){
		dp[i]=100000;
	}
	for(int i=1;i<12;i++){
		for(int j=0;j<3;j++){
			if(i>=coins[j] && dp[i-coins[j]]+1<dp[i]){
				dp[i]=dp[i-coins[j]]+1;
			}
		}
	}
	cout<<dp[11];
} 
