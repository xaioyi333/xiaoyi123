#include <iostream>
#include <algorithm> 
using namespace std;
//œ£∂˚≈≈–Ú 
void ShellSort(int a[], int len)
{
	int h = 1;
	while( h<len ) 
		h = 3*h + 1;
	while( h>0 )
	{
		for (int j=h; j<len; j++)
		{
			int key = a[j];
			int i = j-h;
			while( i>=0 && a[i]>key )
			{
				a[i+h] = a[i];
				i = i-h;
			}
			a[i+h] = key;
		}
		h  = h/3;
	}
}
/*for(int i=2;i>=1;i--)
	ShellSort(a, i);*/
const int N=100+10;
int a[N];
int main(){
	
	int n,temp,j;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	//÷±Ω”≤Â»Î≈≈–Ú 
	for(int i=0;i<n;i++){
		temp=a[i];
		for(j=i-1;j>=0 and temp<a[j];j--){
			a[j+1]=a[j];
			a[j]=temp;
		}
		
	}
	
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
		
	}
	return 0;
} 
