#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
  string zi="3456789XJQKA2MF" ;
  int T,c1,c2;
  string a,b;
  cin>>T;
  for(int i=0;i<T;i++){
  	cin>>a>>b;
  	
  	c1=max(zi.find(a[0]),zi.find(a[1]));
	c2=max(zi.find(b[0]),zi.find(b[1]));
	if(a[0]==a[1]||a=="MF"||a=="FM")
	  cout<<"ShallowDream"<<endl;
	else if(b=="MF"||b=="FM")
	cout<<"Joker"<<endl;
	else if(c1>=c2){
		cout<<"ShallowDream"<<endl;
	}
	else  cout<<"Joker"<<endl;
  }
  
  return 0;
}
