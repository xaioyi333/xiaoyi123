#include<iostream>
#include<cstring> 
using namespace std;
const int N=200003, null= 0x3f3f3f3f;
//大于10e9 
int h[N];
//如果该位置有数且不是x，找下一个位置，如果没数就填进去 
//上厕所法 
int find(int x)
{
	int k=(x%N+N)%N;
	while(h[k]!=null&& h[k]!=x)
	{
		k++;
		if(k==N) k=0;
	}
	return k;
}
int main()
{
	int n;
	scanf("%d",&n);
	memset(h,0x3f,sizeof(h));
	while(n--)
	{
		char op[2];
		int x;
		scanf("%s%d",op,&x);
		int k=find(x);
		if(op[0]=='I') h[k]=x;
		else 
		{
			if(h[k]!=null) puts("Yes");
			else puts("No");
		}
	}
	return 0;
}
