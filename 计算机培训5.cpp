#include <iostream>
#include <vector>
using namespace std;
int main(){
	
	vector<int> a( 100);//向量 
	
	a.push_back(1);
	a.push_back(2);
	
	//a.reserve(n:100);//空间大小 
	
	cout<<a[100]<<a[101]; 
    cout<< a.size();//直接调用库函数，计算空间大小 
    
} 
