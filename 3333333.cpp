#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=20;
int a[N][N];
int main()
{
	
	int n;
	cin>>n;
	while(n--)
	{
		int ss=0;
		for(int i=0;i<9;i++)
		{
			for(int j=0;j<9;j++)
			{
				scanf("%d",&a[i][j]);
				if(a[i][j]>9) {
					ss=1;break;
				}
			}
			if(ss==1) break;
		}
		if (ss==0)
			for(int i=0;i<9;i++)
				for(int j=0;j<9;j++)
				{
						
				}
		if(ss==1) cout<<0<<endl;
		else cout<<1<<endl;	
			
				
	}
	
	
}
