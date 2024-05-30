#include<bits/stdc++.h>
using namespace std;
const int N=110;

char a[N][15],g[N][5000];
bool b[N];
int main()
{
	int n,k;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>k;
	string s;
	cin>>s;
	int i=0,c=0;
	while(i<s.size()){
		if(s[i]!=' '){
			g[c][i]=s[i];
			i++;
		} 
		else i++,c++;
		
	}
	int cnt=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(g[i]==a[j]) cnt++,b[i]=true;
			
		} 
	}
	cout<<cnt<<endl;
	if(cnt<k){
		for(int i=0;i<n;i++){
			if(!b[i])
			cout<<g[i]<<" ";
			else cout<<"<censored>"<<' ';
		}
	}
	else cout<<"He Xie Ni Quan Jia!";
}
