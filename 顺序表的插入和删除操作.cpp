#include<iostream>
using namespace std;
int a[100];
int n;
//顺序表插入操作，O(n) 
void insert(int k,int x){
	//下标为k位置插入x 
	for(int i=n;i>=k;i--){
		a[i+1]=a[i];
	}
	a[k]=x;
	n++;
}
//顺序表删除操作，O(n)
void del(int k){
	//删除下标为k的元素
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
