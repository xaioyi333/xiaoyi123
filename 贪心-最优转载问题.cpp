#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int pi[110];
int main(){
	int c,n,v,w;
	cin>>c;
	for(int i=0;i<c;i++){
		cin>>n>>v>>w;
		int j=0,flag=0;
		float ans=0;
		for(j=0;j<n;j++){
			cin>>pi[j];
		}
		sort(pi,pi+n);
		for(j=0;j<n;j++){
			if((ans+pi[j])/(j+1)<=w){
				ans+=pi[j];
				flag=1;
			}
			else break;
		}
		if(flag)cout<<j*v<<" "<<fixed<<setprecision(2)<<ans/j/100<<endl;
		else cout<<"0 0.00"<<endl; 
	}
	
} 
