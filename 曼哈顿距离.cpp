#include<iostream>
using namespace std;
float fabs(float x1,float x2){
	float ans;
	
	if(x1>x2) ans=x1-x2;
	else ans=x2-x1;
	return ans;
}
int main(){
	float x1,x2,y1,y2,mht;
	cin>>x1>>y1>>x2>>y2;
	mht=fabs(x1, x2)+fabs( y1,y2);
	cout<<mht;
}
