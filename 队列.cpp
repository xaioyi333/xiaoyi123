#include<iostream>
#include<queue> //����ͷ�ļ� 
using namespace std; 

queue <int> h;//������� h 

int main(){
	h.push(101);//�Ӷ�β����һ��Ԫ�� 
	h.push(21);
	h.pop();//������ͷԪ�� 
	int a1=h.front();//��ȡ��ͷԪ�� 
	int a2=h.back();//��ȡ��βԪ�� 
	bool s=h.empty();
	//�ж��Ƿ�Ϊ�գ�Ϊ�շ���1���ǿշ���0 
	cout<<a1<<" "<<a2<<endl<<s;
	
}
