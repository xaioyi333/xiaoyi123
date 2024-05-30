#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 10010;
int n; 
int main()
{
	cin>>n;
	int min1=1,max1=1e9;
	for(int i=0;i<n;i++)
	{
		int a,b;
		cin>>a>>b;
		max1=min(max1,a/b);
		min1=max(min1,a/(b+1)+1);
	}
	cout<<min1<<' '<<max1<<endl;
    return 0;
}

