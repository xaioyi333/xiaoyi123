#include <iostream>
#include <iomanip>
using namespace std;
void youhua(){
	int s,v,t,a=7,b=60,T;
	cin>>s>>v;
	if(s==0)
	t=10;
	
	else
	t=s/v+11;
	
	T=t/60;
	if(T>0){
		
			a-=T;
		
		b-=t%60;
	}
	else{
		b-=t%60;
	}
	cout<<setw(2)<<setfill('0')<<a<<":"<<setw(2)<<setfill('0')<<b;
}
int main(){
	
	youhua();
	
}

