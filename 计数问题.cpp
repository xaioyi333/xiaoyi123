#include<iostream> 
#include <string>
using namespace std;
int main(){
	int n,x,num=0,c;
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		c=i;
		while(c!=0){
			if(c%10==x)
			num++;
			c=c/10;
		}
	} 
	cout<<num;
}
