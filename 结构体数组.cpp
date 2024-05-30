#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
struct Students{
	string name;
	int Chinese,math,total;
};
Students a[100];
bool cmp(Students x,Students y)
{
	return x.total>y.total;
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i].name>>a[i].Chinese>>a[i].math;
		a[i].total =a[i].Chinese+a[i].math;
	}
// —°‘Ò≈≈–Ú 
//	for(int i=0;i<n;i++){
//		int k=i;
//		for(int j=i+1;j<n;j++){
//			if(a[j].total>a[k].total){
//				k=j;
//			}
//			swap(a[i],a[k]);
//		}
//	}
    sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		cout<<a[i].name<<' '<<a[i].Chinese<<' '<<a[i].math<<' '<<a[i].total<<endl;
	}
}
