#include <iostream>
#include<vector>
#include <algorithm> 

using namespace std;
int main(){
	vector< vector<int> > a(10,vector<int>(10));
	//                       ��ʼ��Ϊ10��vctor 
	for( int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			a[i][j]=i*10+j;
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	}



