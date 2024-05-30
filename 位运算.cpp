#include<iostream>
using namespace std;

int main()
{
	//得二进制数 
	int n=rand();//(1010)2进制
	for(int i=31;i>=0;i--)//32位 
	{
		cout<<(n>>i&1);
	} 
} 
