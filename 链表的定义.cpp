#include<iostream>
using namespace std;
struct ListNode{
	int val;
	ListNode* next;
	ListNode(int x):val(x),next(NULL){
		
	};
	//�ý���ֵ        �¸����ĵ�ַ 
};
int main(){
	auto a=ListNode(1);
 //�ȼ���ListNode a(1);
	int n;
	cin>>n;
	a.next=new ListNode(n);
	cout<<a.val<<' '<<a.next->val;
}
