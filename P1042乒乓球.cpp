#include<iostream>
using namespace std;
char recore;
int a11,a21,b11,b21,sc[10000][2],k=0;
int main(){
	while(cin>>recore&&recore!='E'){
		if(recore=='W'){
			a11++;
			a21++;
		}
		if(recore=='L'){
			b11++;
			b21++;
		}
		if((a11>=11&&a11-b11>=2)||(b11>=11&&b11-a11>=2)){
			cout<<a11<<":"<<b11<<endl;
			a11=0;b11=0;
		}
		if((a21>=21&&a21-b21>=2)||(b21>=21&&b21-a21>=2)){
			sc[k][0]=a21;sc[k][1]=b21;
			a21=0;b21=0;
			k++;
		}
	}
	cout<<a11<<":"<<b11<<endl; 
	cout<<endl;
	for(int i=0;i<k;i++){
		cout<<sc[i][0]<<":"<<sc[i][1]<<endl;
	}
	cout<<a21<<":"<<b21;
	return 0;
}

