#include<iostream>
#include<algoruthm>
#include<cstring>
using namespace std;
const int N=100010,M=200010;
int n,m;
int h[N],e[M],ne[M],idx;
int color[N];
void add(int a,b)
{
	e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}
int main()
{
	scanf("%d%d",&n,&m);
	
}
