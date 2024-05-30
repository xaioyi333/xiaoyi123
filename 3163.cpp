#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int INF = 0x3f3f3f3f;
const int mod = 1e9 + 7;
const int N = 100010;
int t;
int main()
{
	cin>>t;
	while(t--)
	{
		string s;
		int cnt=0,res=0;
		cin>>s;
		map<char,int> mp,back;
		for(int i=0;i<s.size();i++){
			mp[s[i]]++;
			cnt++;
			if(mp[s[i]]==2){
				mp=back;
				res+=cnt-2;
				cnt=0;
			}
		}
		if(cnt>0) res+=cnt;
		cout<<res<<endl;
	}
    return 0;
}

