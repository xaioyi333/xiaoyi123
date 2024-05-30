#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N=100010;
int cnt;
int main()
{
	string s,x;
	//cin>>s>>x;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]!=x[i]){
			if(s[i]=='*') s[i]='o';
			else s[i]='*';
			
			if(s[i+1]=='*') s[i+1]='o';
			else s[i+1]='*';
			
			cnt++;
		}
	}
	cout<<(long long)-3%2;
 	return 0;
}

