#include<iostream>
using namespace std;
const int N =100010;
int e[N],ne[N],idx,head
//head ��ʾͷ�����±�
//e[i] ��ʾ���i��ֵ
//ne[i]��ʾ���i��next��ָ���Ƕ���
// idx�洢��ǰ�Ѿ��õ��˵��Ǹ��� 

//��x���뵽ͷ��㣨25minʱ�� 
void add_head(int x){
	e[idx]=x;
	ne[idx]=head;
	head=idx;
	idx++;
} 

int main(){
	
} 
