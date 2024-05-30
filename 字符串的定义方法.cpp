#include<iostream>
#include <string>
using namespace std;
int main(){
	string s1="Keep Learning!" ;
	string s2=("Keep Learning!") ;
	string s3(s1,0,6) ;
	string s4(6,'*');
	string s5(s1,1);// 
	string s6("Keep Learning!",0);
	//´Ó×Ö·û´®ÏÂ±ê½ØÖ¹ 
	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;
	cout<<s4<<endl;
	cout<<s5<<endl;
	cout<<s6<<endl;
	return 0;
} 
