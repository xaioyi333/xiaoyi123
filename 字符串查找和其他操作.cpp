#include <iostream>
#include <string>
#include<algorithm>
using namespace std;
int main(){
	string s1="appl e hello";
	string s2;
	s2=s1.substr(1,5);
	cout<<s2<<endl;
	cout<<s1.find_first_not_of("apple")<<endl;
	//找到第一个不是"apple" 的下标 
	cout<<s1.rfind("e",5)<<endl;
	//从右往左查 
	cout<<s1.find_last_of("e");
	//找到第一个不是"e" 的下标 
}
