#include<bits/stdc++.h>
using namespace std;
const int N=20;
char a[N][N];
int main()
{
	//cout<<!!1;
	string s;
	cin>>s;
	int id=0,k=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=' '){
			a[id][k]+=s[i];
			k++;
		}
		else id++,k=0;
	//	cout<<a[0]<<'\n';	
	} 

	if(!strcmp(a[0],"or")||!strcmp(a[0],"and")) {
		cout<<"error"<<endl;
		return 0;
	}
	
	bool r=0,b1=0,b2;
	if(!strcmp(a[0],"true"))r=1;
	else r=0;
	int kk = 0;
	char op=0;
	for(int i=1;i<id;i++)
	{	kk++;
		if(kk%2!=1){
			if(!strcmp(a[kk],"and")){
				if(b)
				op = '&';
			}
			else if(!strcmp(a[kk],"or")){
				op = '|';
			}
			else if(!strcmp(a[kk],"not")){
				b1=!b1;
				b2=1;
				op='!';
				
			}
			else {
				cout<<"error";
				return 0;
			}
		}
		else{
			if(!strcmp(a[k],"true")){
				if(op=='&'){
				r=r&&1;
			}
			else if(op=='|'){
				r=r||1;
			}
//			else if(op=='!'){
//				r=!r;
//			}
			}
			else if(!strcmp(a[k],"false")){
				if(op=='&'){
				r=r&&0;
			}
			else if(op=='|'){
				r=r||0;
			}
			}
			else {
				cout<<"error";
				return 0;
			}
		}
	}
	if(r)cout<<"true";
	else cout<<"false";
}
