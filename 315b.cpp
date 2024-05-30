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
		char a[5];
		scanf("%s",a);
		int b=a[0]-96;
		int c=a[1]-96;
		if(b<c){
			cout<<25*(b-1)+c-1<<endl;
		}
		else cout<<25*(b-1)+c<<endl;
	}
    return 0;
}

