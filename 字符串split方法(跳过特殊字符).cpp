#include<iostream>
#include<string>
using namespace std;
int main(){
	string s=("i love  you#China!hello@world");
	string split(" #!@");
	int pos1,pos2;	
	while(pos1<s.size()){
		pos2=s.find_first_of(split,pos1);
		if(pos2!=pos1){
			cout<<s.substr(pos1,pos2-pos1)<<endl;
		}
		if(pos2==-1){
			break;
		}
		pos1=pos2+1;
	}
	
}
