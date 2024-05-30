#include<iostream>
using namespace std;
typedef long long LL;
// a^k%p
//Ҫ��pΪ���� 
int qmi(int a,int k,int p)
{
	int res=1;
	while(k)
	{
		if(k&1) res=(LL)res*a%p;
		k>>=1;
		a=(LL)a*a%p;
	}
	return res;
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		int a,k,p;
		scanf("%d%d",&a,&p);
		int res=qmi(a,p-2,p);
		if(a%p) printf("%d",res);
		else puts("impossible");
	}
	return 0;
} 
