#include<iostream>
#include<algorithm>
using namespace std;
const int N = 10;
int t;
int dx[5]={0,-1,0,1,0},dy[5]={0,0,1,0,-1};
//�С��ϡ��ҡ��¡��� λ������ 
char g[N][N],backup[N][N];
void turn(int x,int y)//�����갴�¿��� 
{
	for(int i=0;i<5;i++)
	{
		int a=x+dx[i],b=y+dy[i];
		if(a>=0&&a<5&&b>=0&&b<5){
			g[a][b]^=1; //g[a][b]=48��49 
		}
	}
}
int work()
{
	int res=1e9;
	for(int i=0;i<1<<5;i++)	//��һ�е����а��� 
	{
		memcpy(backup,g,sizeof g);
		int step=0;
		for(int j=0;j<5;j++)
		{
			if(i>>j&1) {//�����jλ��1˵��Ҫ��(���ܵ� 
				step++;
				turn(0,j);
			}
		}
		for(int i=0;i<4;i++)
			for(int j=0;j<5;j++)
				if(g[i][j]=='0'){
					step++;
					turn(i+1,j);
				}
		
		bool success=true;
		for(int j=0;j<5;j++)
			if(g[4][j]=='0'){
				success=false;
				break;
			}
		if(success) res=min(res,step);
		memcpy(g,backup,sizeof g);//�ָ�ԭ���� 
	}
	if(res>6) res=-1;
	return res;
}
int main()
{
	cin>>t;
	while(t--)
	{
		for(int i=0;i<5;i++) cin>>g[i];
		int res=1e9;
		res=work();
		cout<<res<<endl;
	}
    return 0;
}

