#include<iostream>
using namespace std;

int main()
{
	//�ö������� 
	int n=rand();//(1010)2����
	for(int i=31;i>=0;i--)//32λ 
	{
		cout<<(n>>i&1);
	} 
} 
