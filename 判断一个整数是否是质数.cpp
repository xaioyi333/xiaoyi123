#include <iostream>
using namespace std;
int main(){
	int n;
	int i=2;
	bool flag=true;
	cin>>n;
	while(i!=n){
		if(n%i==0) flag=false;
		i++;
	}
	cout<<flag;
	return 0;
}
