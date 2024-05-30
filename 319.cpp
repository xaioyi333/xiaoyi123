#include<iostream>
#include<algorithm>
using namespace std;
const int N = 100010;

int main()
{
	int a[][4]={{2,3,4},{6,6},{7,8,9,0}};
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<4;j++)cout<<a[i][j]<<" ";
		puts("");
	}
		
		
    return 0;
}

