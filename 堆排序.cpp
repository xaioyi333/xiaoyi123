#include<iostream>
#include<algorithm>
using namespace std;

void heapify(int a[],int start,int end){
	int dad=start;
	int son=dad*2+1;
	while(son<=end){
		//先比较两个子结点大小，选择最大的 
		if(a[son]<a[son+1]&& son+1<=end){
			son++;
		}
//如果父节点比子节点大，代表调整完成，直接跳出函数 
		if(a[dad]>=a[son]) return;
		
		else {//否则交换父子内容，子节点再和孙节点比较 
			swap(a[son],a[dad]);
			dad=son;
			son=dad*2+1;
		}
	}
}         
void heap_sort(int a[],int len){
	for(int i=len/2-1;i>=0;i--){
		heapify(a,i,len-1);
	}
	for(int i=len-1;i>0;i--){
		swap(a[0],a[i]);
		heapify(a,0,i-1);
	}
} 
int main(){
	int a[9]={3,7,2,9,5,1,43,5,7};
	heap_sort(a,9);
	for(int i=0;i<9;i++){
		cout<<a[i]<<" ";
	} 
}//3,7,2,9,5,1,43,5,7
