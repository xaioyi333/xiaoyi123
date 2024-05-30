#include<iostream>
#include<algorithm>
using namespace std;
const int N = 100010;
int t; 
int main()
{
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		if(a<b){
			if(b<c) cout<<"STAIR"<<endl;
			else if(b>c) cout<<"PEAK"<<endl;
			else cout<<"NONE"<<endl; 
		}
		else cout<<"NONE"<<endl; 
	} 
    return 0;
}

