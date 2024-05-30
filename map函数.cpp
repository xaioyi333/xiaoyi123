#include<iostream>
#include<map>
#include<string>

using namespace std;
int f(){
	for(long long i=1e9;i<1e10;i++){
		int cnt=0;
		for(int j=2;j*j<i;j++){
			if(i%j==0) {
				cnt++;break;
			}
			
		}
		if(cnt==0) {
			return i;
		}
	}
}
int main(){
	map<string,int> a;
	a["12345678902"]=1234567890%f();
	cout<<a["12345678902"];
}
