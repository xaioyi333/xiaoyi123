#include<iostream>
using namespace std;
int a[1010];
int main(){
	int n,m;
	cin>>n>>m;
	int tmp;
	for(int i=0;i<m;i++){
		cin>>tmp;
		a[tmp]++;
	}
	for(int i=1;i<=n;i++){
		for(int j=0;j<a[i];j++){
			cout<<i<<' ';
		}
	}
}
