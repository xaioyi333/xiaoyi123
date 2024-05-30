#include<iostream>
#include<algorithm>
using namespace std;
typedef long long LL; 
const int N = 100010;
int n;
int a[N];
//让所有人等待时间之和最短
//t=a1*(n-1)+a2*(n-2)+...+an*0;
int main()
{
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	
	sort(a,a+n);
	LL res=0;
	for(int i=0;i<n;i++) res+=a[i]*(n-i-1);
	
	printf("%d\n",res); 
    return 0;
}

