#include<iostream>
#include<fstream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N=100010;
int v[280+10][100+10],cnt[100+10],w[100+10];
//v�ǲ�����ȣ�������ݣ� cntͳ��ÿ�������м�����ȥ��  
//wÿ������������ܺͣ���û��ƽ���� 
int ans[300];//ÿ����������� ������� 
int k[110];//���±� 
int res[100];//�������ÿ�����������ƽ��ֵ 
long long a;//���ղ�����֮�� 
int main()
{
//	ifstream fin("data.txt");
//	for(int i=1;i<=280;i++)
//		for(int j=1;j<=100;j++){
//			fin>>v[i][j]; //�ѱ���������루������ 
//		} 
	
	memset(ans,0x3f,sizeof(ans));
	bool b1=true;
	for(int i=1;i<=280;i++)
		for(int j=1;j<=100;j++)
		{
			if(v[i][j]<ans[i])//ÿ��������������� 
			{
				ans[i]=min(ans[i],v[i][j]);
				k[i]=j; 
			}
		}
	for(int i=1;i<=100;i++){
		if(cnt[i]<2) {//�ж�ÿ�������Ƿ�����2������ 
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

