#include <iostream>
using namespace std;
int main(){
    int fob[20];
	fob[0]=0;
	fob[1]=1;
	 for(int i=2;i<20;i++){
	 		fob[i]=fob[i-1]+fob[i-2];
	 }
	 for(int i=19;i>=0;i--){
	 	cout<<fob[i]<<" ";
	 }
	return 0; 
}
