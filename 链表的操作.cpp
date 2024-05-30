#include<iostream>
using namespace std;
const int N =100010;
int e[N],ne[N],idx,head
//head 表示头结点的下表
//e[i] 表示结点i的值
//ne[i]表示结点i的next的指针是多少
// idx存储当前已经用到了的那个点 

//将x插入到头结点（25min时候 
void add_head(int x){
	e[idx]=x;
	ne[idx]=head;
	head=idx;
	idx++;
} 

int main(){
	
} 
