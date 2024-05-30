#include<iostream>
using namespace std;

struct Node{
	int val;
	Node* next;
	Node(int _val) : val(_val),next(NULL){
	//构造函数	      //是一种赋值语句 
	//结构体里定义函数   //等价	val=_val;
	//特殊的定义函数方式   // next=NULL;
	}
};

int main(){
	Node* p= new Node(1);
	Node* q= new Node(2);
	Node* o= new Node(3);
	
	p->next =q;
	q->next =o;
	
	Node* head=p;
	// 添加节点
	Node* u= new Node(4);
	u->next = head;
	head = u;
	// 删除节点（不是真的删除） 
	u->next= head->next->next;
	
	for(Node* i = head; i!=0; i = i->next){
		cout<<i->val<<endl;
	}
	cout<<sizeof(Node)<<endl<<sizeof(Node*); 
	return 0;
}
