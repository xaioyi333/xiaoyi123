#include<iostream>
using namespace std;
int face_coin[3]={5,2,1},ans[3];
int m;
int main(){
	cin>>m;
	for(int i=0;i<3;i++){
		ans[i]=m/face_coin[i];
		m=m-ans[i]*face_coin[i];
	}
	for(int i=0;i<3;i++){
		cout<<face_coin[i]<<"ÔªÓ²±Ò£º"<<ans[i]<<endl;
	}
}
