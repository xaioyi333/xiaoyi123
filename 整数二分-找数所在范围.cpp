#include<iostream>
using namespace std;
const int N=100010;
int n,m;
int q[N];
int main()
{
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&q[i]);
	}
	while(m--)
	{
		int x;
		scanf("%d",&x);
	//模板1
		int l=0,r=n-1;
		while(l<r)
		{
			int mid=l+r>>1;
			if(q[mid]>=x) r=mid;
			else l=mid+1;
		}
		if(q[l]!=x) cout<<"-1 -1"<<endl;
		else 
		{
			cout<<l<<" ";//区间左端点 
	//模板2
			int l=0,r=n-1;	
			//(可以只写r=n-1) 右端点一定在[左端点，n-1]之间 
			while(l<r)
			{
				int mid=l+r+1>>1;//因为是写的是l=mid,所以要+1 
				if(q[mid]<=x) l=mid;
				else r=mid-1;
			}
			
			cout<<l<<endl;//区间右端点 
		}
	}
	return 0; 
}
