#include <iostream>
#include <string> 
#include <algorithm>
using namespace std;
string s[30],t,d;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
		for(int i=0;i<n;i++){
		for(int k=0;k<n-i;k++){
			if(sizeof(s[k])>sizeof(s[k+1])){
				for(int j=0;1;j++){
				//换序规则 
			if(s[k].substr(j,1)>s[k+1].substr(j,1)){
				break;
			}
			if(s[k].substr(j,1)==s[k+1].substr(j,1)){
				continue;
			}
			if(s[k].substr(j,1)<s[k+1].substr(j,1)){
				t=s[k];
				s[k]=s[k+1];
				s[k+1]=t; 
				break;
			}
			if(s[k].substr(sizeof(s[k+1]),1)>s[k+1].substr(0,1)){
				break;
			}
			else {
				t=s[k];
				s[k]=s[k+1];
				s[k+1]=t; 
				break;
			}
		  }
		}
		if(sizeof(s[k])<sizeof(s[k])){
			for(int j=0;1;j++){
				//换序规则 
			if(s[k].substr(j,1)>s[k+1].substr(j,1)){
				break;
			}
			if(s[k].substr(j,1)==s[k+1].substr(j,1)){
				continue;
			}
			if(s[k].substr(j,1)<s[k+1].substr(j,1)){
				t=s[k];
				s[k]=s[k+1];
				s[k+1]=t; 
				break;
			}
			if(s[k+1].substr(sizeof(s[k]),1)>s[k].substr(0,1)){
				break;
			}
			else {
				t=s[k];
				s[k]=s[k+1];
				s[k+1]=t; 
				break;
			}
		}
	  }
	  if(sizeof(s[k])==sizeof(s[k+1])){
	  	for(int j=0;j<sizeof(s[k]);j++){
				//换序规则 
			if(s[k].substr(j,1)>s[k+1].substr(j,1)){
				break;
			}
			if(s[k].substr(j,1)==s[k+1].substr(j,1)){
				continue;
			}
			if(s[k].substr(j,1)<s[k+1].substr(j,1)){
				t=s[k];
				s[k]=s[k+1];
				s[k+1]=t; 
				break;
			}
	  }
	}
}
}
	for(int i=0;i<n;i++){
		d+=s[i];
	}
	
	cout<<d;
	return 0;
} 
