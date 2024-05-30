#include<iostream>
using namespace std;
int v[4]={0,1500,3000,2000};
int w[4]={0,1,4,3};
int dp[10][10];
int main(){
	for(int i=1;i<4;i++){
		for(int j=1;j<=4;j++){
			if(j>=w[i]){
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
			}
			else dp[i][j]=dp[i-1][j];
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}
}
