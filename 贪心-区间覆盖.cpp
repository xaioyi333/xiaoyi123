#include<iostream>
#include<algorithm>
using namespace std;
const int N = 100010;
/*1.将所有区间按左端点从小到大排序 
2.从前往后依次枚举每个区间，在所有能覆盖start的区间中，
选择右端点最大的区间；然后将start更新成右端点的最大值*/ 
int n;
struct Range
{
	int l,r;
	bool operator< (const Range &w)
	{
		return l<w.l;
	}
}range[N];
int main()
{
	int st,ed;
	scanf("%d%d%d",&st,&ed,&n);
	for(int i=0;i<n;i++){
		int l,r;
		scanf("%d%d",&l,&r);
		range[i]={l,r};
	}
	sort(range,range+n);//排序 
	int res=0;
	bool success=false;
	for(int i=0;i<n;i++)
	{
		int j=i,r=-2e9;
		while(j<n&&range[j].l<=st)
		{
			r=max(r,range[j].r);
			j++;
		}
		if(r<st)
		{
			res=-1;
			break;
		}
		res++;
		if(r>=ed)
		{
			success=true;
			break;
		}
		st=r;
		i=j-1;
	}
	if(!success) res=-1;
	printf("%d\n",res);
    return 0;
}

