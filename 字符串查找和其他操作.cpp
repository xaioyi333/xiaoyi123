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
	//�ҵ���һ������"apple" ���±� 
	cout<<s1.rfind("e",5)<<endl;
	//��������� 
	cout<<s1.find_last_of("e");
	//�ҵ���һ������"e" ���±� 
}
