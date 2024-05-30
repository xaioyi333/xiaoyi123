#include<iostream>
#include <cmath> 
using namespace std;
int f(int n){
	if(n==1) return 0;
    if(n==2) return 1;
    if(n%2==0) return 0;
	for(int j=2;j<sqrt(n);j++){
			if(n%j==0){
			return 0;
		}	
    }
    return 1;
}
int main(){
	int L,R,cnt=0;
	cin>>L>>R;
	for(int i=L;i<=R;i++){
		if(f(i)==1){
			cnt++;
		}
		
		}
		cout<<cnt;
	}
	

