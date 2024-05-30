#include <iostream>
using namespace std;
int zuhe(int n){
	long long ans=1;
	for(int i=2;i<=n;i++){
		ans*=i;
	}
	return ans;
}
int main(){
	int n,m;
	long long shu;
	cin>>n>>m;
	shu=zuhe(n)/(zuhe(m)*zuhe(n-m));
	cout<<shu;

	return 0; 
} 
// Cnm=n!/(m!*(n-m)!) 
