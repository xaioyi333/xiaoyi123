#include <iostream>
using namespace std;
int main(){
	int n=5,a[n]={1,2,3,4,5};
	int c,mid,left,right;
	cin>>c;
	left=0,right=n-1;

	bool found = false;
	while(left<=right && not found){
		mid=(left+right)/2;
		if(c<a[mid]){
			right=mid-1;
		}
		if(c>a[mid]){
			left=mid+1;
		}
		if(c==a[mid]){
			found=true;
		}
		
	}
	if(found){
		cout<<mid;//об╠Й 
	}
	else cout << "Not exist";
	return 0;
} 
