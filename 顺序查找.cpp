#include <iostream>
using namespace std;
int main(){
	int a[5]={1,2,3,4,6};
	float it;
	cin>>it;
	bool flag=false;
	for(int i=0;i<5;i++){
		if(a[i]==it)
		flag=true;
	}
	cout<<flag;
	
}
