#include<bits/stdc++.h> 
using namespace std;
int a[1000000];
bool b[1000000];
int main(){
	
	for(int i=100000;i<100000+10;i++){
		for(int j=2;j<=sqrt(i);j++){
			if(i%j==0) b[i]=true;
		}
	}
	for(int i=100000;i<100000+10;i++){
		if(!b[i]) cout<<i<<" ";
	}
}
