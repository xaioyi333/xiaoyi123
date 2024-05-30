#include <iostream>
using namespace std;
int main(){
	int k=0,d=0,num=0;
	cin>>k;
	if(k==1) num=1;
	else {
	for(int i=1;i<k;i++){
		for(int j=1;1;j++){
			
				if(d==k)
			break;
	       num=num+i;
			d++;
			if(j==i)
			break;
			
		}
		
	}
	}
	cout<<num;
}
