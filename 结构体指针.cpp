#include<iostream>
#include<string>
using namespace std;

struct Student{
	string name;
	char gender;
	int age;
};
Student a={"xiaoming",'M',18};
int main(){
	Student *p=&a;
	cout<<p->name<<" "<<p->gender<<" "<<p->age<<endl;
	//µÈ¼Û 
	cout<<(*p).name<<" "<<(*p).gender<<" "<<(*p).age;
}
