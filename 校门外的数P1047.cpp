#include<iostream>
using namespace std;
int main(){
	int l,m,a[10000];
	int u,v,num=0;
	cin>>l>>m;
	for(int i=0;i<=l;i++){
		a[i]=0;
	}
	for(int i=0;i<m;i++){
	   cin>>u>>v;
	   for(int j=u;j<=v;j++){
	   	a[j]=1;
	   }
    }
    for(int i=0;i<=l;i++){
    	if(a[i]==0)
    	num++;
	}
	cout<<num;
} 
