#include<iostream>
#include<algorithm>
using namespace std;

const int N = 100 + 10;
int a[N];
int ok[N];

int main(){
	int n, num;
	cin >> n;
	num = n;
	
	for(int i=0; i < n;i++){
		cin>>a[i];
	}

	sort(a,a+num); 
	
	int k = a[0];
	for(int i = 1;i < n;i++){
		if(a[i] == k){
			ok[i] = 1;
			num--;
		}
		else{
			k = a[i];
		}
	}
	cout<<num<<endl;

	for(int i=0;i<n;i++){
		if(ok[i] == 0)
			cout<<a[i]<<' ';
	}
	return 0;
}
