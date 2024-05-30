#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int M=510,N=100010;
int n,m;
int dist[M];
bool st[M];
vector<pair<int,int> > a[M]; 
void dj()
{
	memset(dist,0x3f,sizeof(dist));
	dist[1]=0;
	for(int i=0;i<n;i++)
	{
		int t=-1;
		for(int j=1;j<=n;j++)
		{
			if(!st[j]&&(t==-1||dist[j]<dist[t]) ){
				t=j;
			}
		}
		st[t]=1;
		for(int i=0;i<a[t].size();i++)
		{
			int k=a[t][i].first;
			dist[k]=min(dist[k],dist[t]+a[t][i].second);
		}
	}
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<m;i++)
	{
		int x,y,z;
		cin>>x>>y>>z;
		a[x].push_back({y,z});
	}
	dj();
	if(dist[n]!=0x3f3f3f3f)cout<<dist[n];
	else cout<<-1;
 	return 0;
}

