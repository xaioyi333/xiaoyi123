#include<iostream>
using namespace std; 

const int N=100010;

//head ��ʾͷ�����±�
//e[i] ��ʾ���i��ֵ
//ne[i]��ʾ���i��nextָ���Ƕ��� 
//idx �洢��ǰ�Ѿ��õ��ĵ� 
int head,e[N],ne[N],idx; 

//��ʼ��
void init()
{
	head=-1;
	idx=0;
} 

//��x���뵽ͷ��� 
void add_to_head(int x)
{
	e[idx]=x; 
	ne[idx]=head;
	head=idx;
	idx++;
}
//��x���뵽�±�Ϊk�ĺ��� 
void add(int k,int x)
{
	e[idx]=x;
	ne[idx]=ne[k];
	ne[k]=idx;
	idx++;
}
//���±�Ϊk����ĵ�ɾ�� ���±��0��ʼ 
void remove(int k)
{
	ne[k]=ne[ne[k]]; 
}
int main(){
	
}
