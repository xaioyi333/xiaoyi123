#include<iostream>

using namespace std;
long long n,k,cnt;
void dfs(int x,long long sum){//��ǰλ������ǰ��������
    if(x==n){//λ������
        if(sum%k==0) cnt++;//������������ͼ�������һ
        return;
    }
    for(int i=1;i<=6;i++) dfs(x+1,sum*10+i); //λ����һ���ں��油��
}
int main(){
    cin>>n>>k;
    dfs(0,0);//��0λ������ǰ��Ϊ0��ʼ����
    cout<<cnt%1000000007;//�ǵ�ȡģ
}
