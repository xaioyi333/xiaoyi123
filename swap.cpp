#include<bits/stdc++.h>
#include<iostream>
#define N 200010
using namespace std;
int a[N];
int n;
void q_sort(int a[],int l,int r){
	if(l>=r) return;
	int i=l-1,j=r+1;
	int x=a[l];
	while(i<j){
		do i++;while(a[i]<x);
		do j--;while(a[j]>x);
		if(i<j) swap(a[i],a[j]);
	}
	q_sort(a,l,j);
	q_sort(a,j+1,r);
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	q_sort(a,0,n-1);
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	
}
