#include <iostream>
#include <vector>
using namespace std;
int main(){
	
	vector<int> a( 100);//���� 
	
	a.push_back(1);
	a.push_back(2);
	
	//a.reserve(n:100);//�ռ��С 
	
	cout<<a[100]<<a[101]; 
    cout<< a.size();//ֱ�ӵ��ÿ⺯��������ռ��С 
    
} 
