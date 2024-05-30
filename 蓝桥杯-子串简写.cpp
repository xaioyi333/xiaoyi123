#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 500010;
char c1,c2;
string s;
int k;
long long cnt,sum;
int main()
{
	cin>>k>>s>>c1>>c2;
	for(int i=0,j=k-1;j<s.size();j++,i++)
	{
		if(s[i]==c1) sum++;
		if(s[j]==c2) cnt+=sum;
	}
	cout<<cnt<<endl;
    return 0;
}

