#include<iostream>
#include<cstring>
using namespace std;
//先手必胜：a1^a2^...^an!=0
//先手必败：a1^a2^...^an=0
int main()
{
	int n,res=0;
	scanf("%d",&n);
	while(n--)
	{
		int x;
		scanf("%d",&x);
		res^=x;
	}
	if(res==0) puts("No");
	else puts("Yes");
}
