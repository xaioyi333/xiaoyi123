#include <iostream>
#include <iomanip>
using namespace std;
void youhua(){
	long long s,v,t,a=7,b=60,T;
	cin>>s>>v;
	t=s/v+11;
	T=t/60;
	if(T>=0&&T<=7){
		
			a-=T;
		
		b-=t%60;
	}
	else{
		a=24+7-T;
		b-=t%60;
	}
	cout<<setw(2)<<setfill('0')<<a<<":"<<setw(2)<<setfill('0')<<b;
}
int main(){
	
	youhua();
	
}
