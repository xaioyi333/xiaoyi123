#include<iostream>
using namespace std;

struct Node{
	int val;
	Node* next;
	Node(int _val) : val(_val),next(NULL){
	//���캯��	      //��һ�ָ�ֵ��� 
	//�ṹ���ﶨ�庯��   //�ȼ�	val=_val;
	//����Ķ��庯����ʽ   // next=NULL;
	}
};

int main(){
	Node* p= new Node(1);
	Node* q= new Node(2);
	Node* o= new Node(3);
	
	p->next =q;
	q->next =o;
	
	Node* head=p;
	// ��ӽڵ�
	Node* u= new Node(4);
	u->next = head;
	head = u;
	// ɾ���ڵ㣨�������ɾ���� 
	u->next= head->next->next;
	
	for(Node* i = head; i!=0; i = i->next){
		cout<<i->val<<endl;
	}
	cout<<sizeof(Node)<<endl<<sizeof(Node*); 
	return 0;
}
