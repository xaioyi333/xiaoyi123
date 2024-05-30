#include<iostream>
#include<string>
using namespace std;
int b[26];
string a;
//int main(){
//	cin>>a;
//	for(int i=0;i<a.size();i++){
//		b[a[i]-'a']++;
//	} 
//	for(int i=0;i<26;i++){
//		if(b[i]==1){
//			cout<<char(97+i);
//			break;
//		}
//	}
//}
int main(){
	float a,b;
	float q;
	string t;
	cin>>a>>b;
	q=a/b;
	t=to_string(q);
	cout<<t<<endl;
	for(int i=0;i<t.size();i++){
		if(t[i]>='0'&&t[i]<='9'){
			t[i]+=17;
		}
		cout<<t[i];
	}
}
