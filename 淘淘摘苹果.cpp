#include <iostream>
using namespace std;
int main(){
   long long a[10];
    long long b,c=0; 
    for(int i=0;i<10;i++){
    	cin>>a[i];
		}
		cin>>b;
		for(int i=0;i<10;i++){
    	if(a[i]<=(b+30)){
    		c+=1;
		}
	}
	cout<<c;
}
