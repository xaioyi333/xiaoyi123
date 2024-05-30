#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

FILE *fin,*fout;
//指向文件的指针 
int main(){
	int n;
	int a[100];
	fin=fopen("a.txt","r");
	fout=fopen("b.txt","w");
	fscanf(fin,"%d",&n);
	for(int i=0;i<n;i++){
		fscanf(fin,"%d",&a[i]);
	}
	sort(a,a+n); 
	for(int i=0;i<n;i++){
		fprintf(fout,"%d ",a[i]);
	}
}
