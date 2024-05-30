#include<iostream>
using namespace std;
struct ListNode{
	int val;
	ListNode* next;
	ListNode(int x):val(x),next(NULL){
		
	};
	//该结点的值        下个结点的地址 
};
int main(){
	auto a=ListNode(1);
 //等价于ListNode a(1);
	int n;
	cin>>n;
	a.next=new ListNode(n);
	cout<<a.val<<' '<<a.next->val;
}
