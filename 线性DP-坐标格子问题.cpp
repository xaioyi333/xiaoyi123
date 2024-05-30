#include<iostream>
using namespace std;
const int N=50;
int a[N][N];
int main(){
	int n,m;
	cin>>n>>m;
	//无限制条件走方格问题 (坐标从0开始 
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
//有限制条件 if(限制条件) {
//				a[i][j]=0;
//				continue; 
//			}
			
			if(i==0 || j==0)a[i][j]=1;
			else a[i][j]=a[i-1][j]+a[i][j-1];
		}
	}
	cout<<a[n][m]; 
} 
