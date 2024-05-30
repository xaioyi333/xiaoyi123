#include<iostream>
#include<string>
using namespace std;
int q[9]={0,14,23,56,2,3,98,1,10};
int lis(){
	int len=1;
	int d[500];
	d[1]=q[1];
	for(int i=1;i<=10;i++){
		if(q[i]>d[len]){
			d[++len]=q[i];
			
		}
		else {
			int j=lower_bound(d+1,d+len+1,q[i])-d-1;
//利用二分查找在一个排好序的数组中进行查找（第一个大于或等于q[i]的数字,返回地址）
//减去起始地址就得到该数字下标 
			d[j]=q[i];
		}
	}
	return len;
}
int main(){
	cout<<lis();
} 
