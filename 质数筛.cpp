#include <iostream>
#include <math.h>//cmath 
using namespace std;
int a[100];
bool b[100];
int main(){
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==0||a[i]==1) b[i]=true; 
		for(int j=2;j<=sqrt(a[i]);j++){
			// �ȼ�j<a[i],��һ���Ż� 
		//ʵ����jֻҪС�ڵ��ڸ���a[i]���� 
			if(a[i]%j==0){
				b[i]=true;
			}
		}
	}
	for(int i=0;i<n;i++){
		if(!b[i]){
			cout <<a[i]<<' ';
		}
	}
}
