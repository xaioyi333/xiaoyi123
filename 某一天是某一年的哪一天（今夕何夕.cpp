#include<iostream>
using namespace std;
int main(){
	int year,month,date,num;
	int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	cin>>year>>month>>date;
	num+=date;
	for(int i=1;i<month;i++){
		num+=a[i];
	}
	if((year%100!=0 && year%4==0) || year%400==0){
		if(month>2){
			num+=1;
		}
	}
	cout<<num;
	
	return 0;
} 
