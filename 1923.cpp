#include<iostream>
#include<algorithm>
using namespace std;
const int N=5000000+5;
int a[N],k;
void qsort(int l,int r){
    if(l>=r)return;
    int i=l-1,j=r+1;
    int p=a[l+r>>1];
    while(i<j){
        do i++;while(a[i]<p);
        do j--;while(a[j]>p);
        if(i<j){
            swap(a[i],a[j]);
        }
    }
    if(k<=j)qsort(l,j);
    else qsort(j+1,r);
}
int main(){
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    qsort(0,n-1);
    cout<<a[k];
}
