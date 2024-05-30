#include <iostream>
using namespace std;
int main(){
	for(int i=0;i<4;i++){
		for(int j=0;j<i+1;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
		//循环一次换一行，因为在for语句括号里  
	}
	
}
