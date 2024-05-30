#include<iostream>
#include<fstream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N=100010;
int v[280+10][100+10],cnt[100+10],w[100+10];
//v是不满意度（表格数据） cnt统计每个任务有几个人去做  
//w每个任务不满意度总和（还没求平均） 
int ans[300];//每个做的任务的 不满意度 
int k[110];//存下标 
int res[100];//分配完后每个任务不满意度平均值 
long long a;//最终不满意之和 
int main()
{
//	ifstream fin("data.txt");
//	for(int i=1;i<=280;i++)
//		for(int j=1;j<=100;j++){
//			fin>>v[i][j]; //把表格数据输入（不会做 
//		} 
	
	memset(ans,0x3f,sizeof(ans));
	bool b1=true;
	for(int i=1;i<=280;i++)
		for(int j=1;j<=100;j++)
		{
			if(v[i][j]<ans[i])//每个人做最满意的事 
			{
				ans[i]=min(ans[i],v[i][j]);
				k[i]=j; 
			}
		}
	for(int i=1;i<=100;i++){
		if(cnt[i]<2) {//判断每个任务是否至少2个人做 
			b1=false;
		}
	}
	for(int i=1;i<=280;i++){
		cnt[k[i]]++;
		w[k[i]]+=ans[i]; 
	} 
	for(int i=1;i<=100;i++){
		res[i]=w[i]/cnt[i];
		a+=res[i];
	}
	cout<<a; 
 	return 0;
}

