#include<iostream>
using namespace std;
int main(){
	int t,n[10000];
	int a[10000],b[1000],c[10000];
	cin>>t; 
    for(int i=0;i<t;i++){
    	cin>>n[i];
    	if(n[i]%3==0){
    		a[i]=n[i]/3;
    		b[i]=n[i]/3+1;
    		c[i]=n[i]/3-1;
		}
		if(n[i]%3==1&&n[i]/3-2!=0){
			a[i]=n[i]/3+1;
    	    b[i]=n[i]/3+2;
    		c[i]=n[i]/3-2;
		}
			if(n[i]%3==1&&n[i]/3-2==0){
			a[i]=n[i]/3;
    	    b[i]=n[i]/3+2;
    		c[i]=n[i]/3-1;
		}
		if(n[i]%3==2){
			a[i]=n[i]/3+1;
    		b[i]=n[i]/3+2;
    		c[i]=n[i]/3-1;
		}
	}
	
		for(int i=0;i<t;i++){
			cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
		}
}

