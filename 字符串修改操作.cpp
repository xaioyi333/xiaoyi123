#include <iostream>
#include <string>
using namespace std;
int main(){
	string a="hello1",b="world";
	string s1,s2,s3,s4,s5,s6;
	s5='a'+'b';
	s4=a.substr(2,2);
	s1=a.append(" world");
	s3=a.append(b);
	//���ַ���aβ�����ӣ�+���ַ���
	//�ַ���a�����ı䣡 
	for(int i=0;i<a.size();i+=2){
		a[i]=toupper(a[i]);
		//�Ѷ�ӦԪ�أ���ĸ����ɴ�д 
	}
	cout<<s1<<endl<<a<<endl;
	for(int i=0;i<a.size();i+=3){
		a[i]=tolower(a[i]);
		//�Ѷ�ӦԪ�أ���ĸ�����Сд 
	}
	cout<<a<<endl<<s3<<endl<<s4;
	cout<<'\n'<<s5<<endl;
	s6=a.replace(10,2,"china");
	cout<<s6<<endl;
	a.replace(1,10,5,'6');
	cout<<a;
	
	
}
