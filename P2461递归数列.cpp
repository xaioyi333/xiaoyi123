#include<iostream>

using namespace std;
long long n,k,cnt;
void dfs(int x,long long sum){//当前位数，当前搜索的数
    if(x==n){//位数到了
        if(sum%k==0) cnt++;//如果满足条件就计数器加一
        return;
    }
    for(int i=1;i<=6;i++) dfs(x+1,sum*10+i); //位数加一，在后面补数
}
int main(){
    cin>>n>>k;
    dfs(0,0);//从0位数，当前数为0开始搜索
    cout<<cnt%1000000007;//记得取模
}
