#include<iostream>
using namespace std;
const int N = 100010;
int head,idx,e[N],ne[N];
//初始化 
void init(){
	head=-1;
	idx=1;
}
//头插 
void add_head(int x){
	ne[idx]=head;
	e[idx]=x;
	head=idx;
	idx++;
}
//第k次插入的元素后面插入 
void insert(int k,int x){
	e[idx]=x;
	ne[idx]=ne[k];
	ne[k]=idx;
	idx++;
	
} 
//删除第k次插入的元素后面的一个元素 
void del(int k){
	ne[k]=ne[ne[k]];
} 
void d(){
	head=ne[head];
}
int main(){
	init();
	add_head(3);
	add_head(4);
	add_head(5);
	insert(1,66); 
	del(1);
	for(int i=head;i!=-1;i=ne[i]){
		printf("%d ",e[i]);
	}
}
