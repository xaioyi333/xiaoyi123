#include<iostream>
#include<string>
using namespace std;
int q[9]={0,14,23,56,2,3,98,1,10};
int lis(){
	int len=1;
	int d[500];
	d[1]=q[1];
	for(int i=1;i<=10;i++){
		if(q[i]>d[len]){
			d[++len]=q[i];
			
		}
		else {
			int j=lower_bound(d+1,d+len+1,q[i])-d-1;
//���ö��ֲ�����һ���ź���������н��в��ң���һ�����ڻ����q[i]������,���ص�ַ��
//��ȥ��ʼ��ַ�͵õ��������±� 
			d[j]=q[i];
		}
	}
	return len;
}
int main(){
	cout<<lis();
} 
