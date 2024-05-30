#include<iostream>
using namespace std;
void merge(int a[],int l,int r,int m)
{
	int i,j,k;
	int n1=m-l+1;
	int n2=r-m;
	int left[n1],right[n2];
	for(i=0;i<n1;i++) left[i]=a[l+i];
	for(j=0;j<n2;j++) right[j]=a[m+1+j];
	i=0;j=0,k=l;
	while(i<n1&&j<n2){
		if(left[i]<=right[j]){
			a[k]=left[i];
			i++;
			k++;
		}
		else {
			a[k]=right[j];
			j++;
			k++;
		}
	}
	while(i<n1){
		a[k]=left[i];
		i++;
		k++;
	}
	while(j<n2){
		a[k]=right[j];
		j++;
		k++;
	}
}
void mergesort(int a[],int l,int r){
	if(l<r){
		int m=l+(r-l)/2;
		//递归 
		mergesort(a,l,m);
		mergesort(a,m+1,r);
		//需要一个合并的函数（合并） 
		merge(a,l,r,m); 
	}
}

int main()
{
	int a[10]={3,1,7,5,4,34,21,5,3,10};
	mergesort(a,0,9);
	for(int i=0;i<10;i++){
		cout<<a[i]<<" ";
	}
}  
