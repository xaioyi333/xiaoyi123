#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
const int N = 110;
int n;
char a[N],b[N];
void turn(int x){
	if(a[x]=='*') a[x]='o';
	else a[x]='*';
}
int main()
{
	int cnt=0;
	cin>>a>>b;
	int n=strlen(a);
	for(int i=0;i<n-1;i++)
	{
		if(a[i]!=b[i]) {
			turn(i),turn(i+1);
			cnt++;
		}
	}
	cout<<cnt<<endl;
    return 0;
}

