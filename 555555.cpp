#include<iostream>
using namespace std;
const int N=100010;
//int a[1100];
int cnt[N];
int main()
{
	int n,m,q;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		{
			int x;
			scanf("%d",&x);
			for(int i=0;i<x;i++)
			{
				int y;
				scanf("%d",&y);
				cnt[y]++;
			}
			
		}
	scanf("%d",&q);	
	while(q--){
		int a,b;
		scanf("%d%d",&a,&b);
		int u=min(cnt[a],cnt[b]);
		cout<<u<<endl;
	}
}
