#include<iostream>
using namespace std;
int a[100];
int n;
//˳�����������O(n) 
void insert(int k,int x){
	//�±�Ϊkλ�ò���x 
	for(int i=n;i>=k;i--){
		a[i+1]=a[i];
	}
	a[k]=x;
	n++;
}
//˳���ɾ��������O(n)
void del(int k){
	//ɾ���±�Ϊk��Ԫ��
	for(int i=k;i<n;i++){
		a[i]=a[i+1];
	} 
	n--;
}
int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	insert(3,666);
	del(4);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
} 
