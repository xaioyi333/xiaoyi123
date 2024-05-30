#include<iostream>
#include<fstream>
using namespace std;
int a[100];
ifstream fin("a.txt",ios::app);
ofstream fout("b.txt",ios::app);
                 //新数据加到原来后面 
// 两个文件要和此cpp文件放一起
int main(){
    int n;
	fin>>n;
	for(int i=0;i<n;i++){
		fin>>a[i];
	}
	for(int i=0;i<n;i++){
		fout<<a[i]<<" ";
	}
	fout<<endl;
	return 0;
} 
