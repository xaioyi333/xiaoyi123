#include<iostream>
#include<fstream>
using namespace std;
int a[100];
ifstream fin("a.txt",ios::app);
ofstream fout("b.txt",ios::app);
                 //�����ݼӵ�ԭ������ 
// �����ļ�Ҫ�ʹ�cpp�ļ���һ��
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
