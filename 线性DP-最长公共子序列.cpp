#include<iostream>
#include<string>
using namespace std;
int dp[10][10];
int main(){
	string s1="abcfbc",s2="abfcab";
	int a=s1.size(),b=s2.size();
	for(int i=1;i<=a;i++){
		for(int j=1;j<=b;j++){
			if(s1[i]==s2[j])dp[i][j]=dp[i-1][j-1]+1;
			else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	cout<<dp[a][b];
}
