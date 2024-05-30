#include<iostream>
#include<string>
using namespace std;
typedef long long ll;
int b=233;
const int M=1e9+7;
string a[10000+10];
ll ok[10000+10];
int hash_g(string s){
	int res=0;
	for(int i=0;i<s.size();i++){
		res=(ll)(res*b+s[i])%M;
	}
	return res;
}
int main(){
	int n,cnt=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		ok[i]=hash_g(a[i]);		
	}
	for(int i=0;i<n;i++){
		if(ok[i]!=ok[i+1]&&ok[i]!=0)cnt++;
	}
	cout<<cnt;
} 
