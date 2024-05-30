#include<iostream>
#include<string>
using namespace std;
string a,b;
int main(){
	int p;
	cin>>a;
	for(int i=0;i<a.size();i++){
		if(a[i]=='#'){
			p=i+1;
			for(i++;a[i]!='#';i++){
				
			}
			b+=a.substr(p,i-p);
		}
	}
	cout<<b<<endl;
}
