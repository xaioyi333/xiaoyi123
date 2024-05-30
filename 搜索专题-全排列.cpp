#include<iostream>
#include<algorithm> 
using namespace std;
int num;int num2;
//全排列 
void allrank(int begin,int end,int data[]){
	if(begin==end){
		num++;
		for(int i=0;i<=end;i++){
			cout<<data[i];
		}
		cout<<endl;
	}
	else{
		for(int i=begin;i<=end;i++){
			swap(data[begin],data[i]);
			allrank(begin+1,end,data);
			swap(data[begin],data[i]);
		}
	}	
} 
//Anm n个数中选m个数排列 
//选排列 
void m_rank(int begin,int end,int data[],int m){
	if(begin==m){
		num2++;
		for(int i=0;i<m;i++){
			cout<<data[i];
		}
		cout<<'\n';
	}
	else{
		for(int i=begin;i<=end;i++){
			swap(data[begin],data[i]);
			m_rank(begin+1,end,data,m);
			swap(data[begin],data[i]);
		}
	}
}
int main(){
	int data[10]={0,1,2,3,4,5,6,7,8,9};
	//allrank(0,3,data);
	//cout<<num<<'\n';
	m_rank(0,3,data,3);
	cout<<num2;
}
