
#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+sizeof(a)/sizeof(int),greater<int>());
	//从大到小排序 
	for(int i=0;i<n;i++){
		cout<<a[i]<<endl;
	}
    return 0;
}
