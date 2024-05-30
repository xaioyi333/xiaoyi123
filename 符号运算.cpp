#include <iostream>
using namespace std; 
int main(){
	long long a,b;
	cin>>a>>b;
    if (a > 0 && b >0 ) {
			a = a;
			}
	if (a > 0 && b < 0 ) {
		a = -a;
	}
		if (a <0 && b > 0 ) {
			a = -a;
		}
		if (a < 0 && b < 0 ) {
			a = a;
		}
		if (a == 0) {
		}
		cout<<a;
		return 0;
	}
	

