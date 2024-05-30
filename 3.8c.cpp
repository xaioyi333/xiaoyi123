#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 100010;
char a[10][10];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int cnt[10]={0},b[10]={0};
		for(int i=1;i<=8;i++)
			scanf("%s",a[i]+1);
		int x,y;
		for(int i=1;i<=9;i++)
			for(int j=1;j<=8;j++)
			{
				if(a[i][j]=='#')cnt[j]++;
			}
		for(int i=1;i<=9;i++)
			for(int j=2;j<=7;j++)
			{
				if(cnt[j]==1&&cnt[j-1]==2&&cnt[j+1]==2&&a[i][j]=='#')x=i,y=j;
			}
		cout<<x<<' '<<y<<endl;
	}
    return 0;
}

