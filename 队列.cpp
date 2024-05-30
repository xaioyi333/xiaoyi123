#include<iostream>
#include<queue> //队列头文件 
using namespace std; 

queue <int> h;//定义队列 h 

int main(){
	h.push(101);//从队尾推入一个元素 
	h.push(21);
	h.pop();//弹出队头元素 
	int a1=h.front();//获取队头元素 
	int a2=h.back();//获取队尾元素 
	bool s=h.empty();
	//判断是否为空，为空返回1，非空返回0 
	cout<<a1<<" "<<a2<<endl<<s;
	
}
