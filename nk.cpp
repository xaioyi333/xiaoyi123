#include<bits/stdc++.h>
using namespace std;
const int N=200010;
int n,cnt[N];
int find(){
	int ma,idx;
	for(int i=0;i<N;i++){
		if(cnt[i]>ma) {
			ma=max(ma,cnt[i]);
			idx=i;
		}
	}
	return idx;
}

int main()
{
	cin>>n;
	while(n--)
	{
		priority_queue<int> q;
		memset(cnt,0,sizeof cnt);
		int a,k;
		cin>>a>>k;
		string s;
		cin>>s;
		int idx=0;
		for(int i=0;i<a;i++)
		{
			if(s[i]=='1') {
				cnt[idx]++;
				//cout<<cnt[idx]<<endl;
				
			}
			if(s[i]=='0') {
				q.push(cnt[idx]);
				//cout<<q.top()<<'\n';
				idx++;	
			}
		}
		for(int i=0;i<a;i++)
		{
			if(s[i]=='0') {
				cnt[idx]++;	
			}
			if(s[i]=='1') {
				q.push(cnt[idx]);	
				idx++;	
			}
		}
		q.push(cnt[idx]);
		while(k--){
			q.push(q.top()/2);
			q.pop();
		}
		cout<<q.top()<<endl;
	}
}
