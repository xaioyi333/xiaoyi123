#include<iostream>
#include<string>
using namespace std;
int a[10010];
int main(){
	int n,t;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>t;
	for(int i=0;i<n;i++){
		for(int j=1;j<n;j++){
			if(a[i]+a[j]==t){
				cout<<'['<<i<<','<<j<<']';
				break;
			}
		}
	}
	return 0;
}
