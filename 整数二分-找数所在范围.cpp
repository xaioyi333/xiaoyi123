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
	//ģ��1
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
			cout<<l<<" ";//������˵� 
	//ģ��2
			int l=0,r=n-1;	
			//(����ֻдr=n-1) �Ҷ˵�һ����[��˵㣬n-1]֮�� 
			while(l<r)
			{
				int mid=l+r+1>>1;//��Ϊ��д����l=mid,����Ҫ+1 
				if(q[mid]<=x) l=mid;
				else r=mid-1;
			}
			
			cout<<l<<endl;//�����Ҷ˵� 
		}
	}
	return 0; 
}
