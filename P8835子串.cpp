#include<iostream>
#include<string>

using namespace std;

int main(){
	int T,num=0;
	int n,m;
	string a,b;
	cin>>T;
	while(T--){
		cin>>n>>m;
		cin>>a>>b;
		for(int i=0;i<n;i++){
			if(a[i]>='A'&&a[i]<='Z'){
				a[i]+=32;
			}
		}
		for(int i=0;i<m;i++){
			if(b[i]>='A'&&b[i]<='Z'){
				b[i]+=32;
			}
		}
		for(int i=0;i<m;i++){
			if(b.substr(i,n)==a){
			//�ӵ�i���ַ���ʼ��ȡ�ַ��� 
			//��ȡ����Ϊn 
				num++;
			}
		}
	    cout<<num<<endl;
	    num=0;
	}	
}
