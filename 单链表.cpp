#include<iostream>
using namespace std; 

const int N=100010;

//head 表示头结点的下标
//e[i] 表示结点i的值
//ne[i]表示结点i的next指针是多少 
//idx 存储当前已经用到的点 
int head,e[N],ne[N],idx; 

//初始化
void init()
{
	head=-1;
	idx=0;
} 

//将x插入到头结点 
void add_to_head(int x)
{
	e[idx]=x; 
	ne[idx]=head;
	head=idx;
	idx++;
}
//将x插入到下标为k的后面 
void add(int k,int x)
{
	e[idx]=x;
	ne[idx]=ne[k];
	ne[k]=idx;
	idx++;
}
//将下标为k后面的点删除 （下标从0开始 
void remove(int k)
{
	ne[k]=ne[ne[k]]; 
}
int main(){
	
}
