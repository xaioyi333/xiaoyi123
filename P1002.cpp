#include<iostream>
using namespace std;
const int N=30;
int a[N][N];
int main(){
	int n,m,a1,b1;
	cin>>n>>m>>a1>>b1;
	int x1,x2,x3,x4,x5,x6,x7,x8;
	int y1,y2,y3,y4,y5,y6,y7,y8;
	x1=a1+2,y1=b1+1;
	x2=a1+1,y2=b1+2;
	x3=a1-1,y3=b1+2;
	x4=a1-2,y4=b1+1;
	x5=a1-2,y5=b1-1;
	x6=a1-1,y6=b1-2;
	x7=a1+1,y7=b1-2;
	x8=a1+2,y8=b1-1;
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==x1&&j==y1||i==x2&&j==y2||i==x3&&j==y3||i==x4&&j==y4||i==x5&&j==y5||i==x6&&j==y6||i==x7&&j==y7||i==x8&&j==y8||i==a1&&j==b1){
				a[i][j]=0;
				continue;
			} 
			if(i==0 || j==0)a[i][j]=1;
			else a[i][j]=a[i-1][j]+a[i][j-1];
		}
	}
	cout<<a[n][m]; 
} 
