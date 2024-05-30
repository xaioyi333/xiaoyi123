#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 10010;
int n;
//扫描线法，线段是竖的 
struct Segment{
	int x,y1,y2;//x为横坐标，y1,y2为线段树维护的两个纵坐标
	int k;//k表示我们要加的权值，为+1或-1
	bool operator< (const Segment &t)const
	{//由于要把所有的线段按照横坐标排序，所以要重载小于号
		return x<t.x;
	}
}seg[N*2];//线段最多有两倍(每个矩形两条竖边)
struct Node{
	int l,r;
	int cnt,len;
}tr[N*4];
void pushup(int u)
{//用子节点的信息更新父结点的信息
	if(tr[u].cnt>0) tr[u].len=tr[u].r-tr[u].l+1;
	else if(tr[u].l==tr[u].r) tr[u].len=0;
	else tr[u].len=tr[u<<1].len+tr[u<<1|1].len; 
} 
void build(int u,int l,int r)
{//cnt和len默认为0
	tr[u]={l,r,0,0};
	if(l==r) return;
	int mid=l+r>>1;
	build(u<<1,l,mid),build(u<<1|1,mid+1,r);	
} 
void modify(int u,int l,int r,int k)
 //维护的是一段小段区间的值,k为要在这个区间加上或减去的权值
{
	if(tr[u].l>=l&&tr[u].r<=r)
	{//当前区间已经被完全包含
		tr[u].cnt+=k;
		pushup(u);
	}
	else
	{//往下更新
		int mid=tr[u].l+tr[u].r>>1;
		if(l<=mid) modify(u<<1,l,r,k);
		if(r>mid) modify(u<<1|1,l,r,k);
		pushup(u); 
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int m=0;//表示当前线段的数量
	for(int i=0;i<n;i++)
	{
		int x1,y1,x2,y2;
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		seg[m++]={x1,y1,y2,1};//矩形左竖边
		seg[m++]={x2,y1,y2,-1};//矩形右竖边
	}
	sort(seg,seg+m);//给所有线段排序
	build(1,0,10000);
	int res=0;
	for(int i=0;i<m;i++)//遍历所有线段
	{
		if(i>0)//不能是第一条线，需要等第二条过来才能算面积
		{
			res+=tr[1].len*(seg[i].x-seg[i-1].x);
		}   //根结点的len * 阴影部分高度
		modify(1,seg[i].y1,seg[i].y2-1,seg[i].k);
		//维护的是一小段区间
	}
	printf("%d\n",res);
    return 0;
}

