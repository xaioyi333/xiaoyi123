#include<iostream>
using namespace std;
int main(){
	int n,a[7],my[7],num=0;
	int t=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0;
	cin>>n;
	for(int i=0;i<7;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
	    num=0;
		for(int j=0;j<7;j++){
			cin>>my[j];
			for(int k=0;k<7;k++){
				if(my[j]==a[k])
				num++;
			}
		}
		if(num==7) t++;
		if(num==6) d1++;
		if(num==5) d2++;
		if(num==4) d3++;
		if(num==3) d4++;
		if(num==2) d5++;
		if(num==1) d6++;
	
		
	}
	cout<<t<<" "<<d1<<" "<<d2<<" "<<d3<<" "<<d4<<" "<<d5<<" "<<d6;
	
	return 0;


}
