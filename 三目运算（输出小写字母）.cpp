#include <iostream>
using namespace std;
int main(){
	char c;
	cin>>c;
	c=(c>='A' &&c<='Z')?(c+32):c;
	cout<<c;
}
