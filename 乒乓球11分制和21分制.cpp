#include<iostream>
#include<string>
char s[100000];
using namespace std;
int main()
{
    int w,l,n=0;
    while(int i=1)
    {
		n++;
    	cin>>s[n];
    	if(s[n]=='E')
    	{
    		break;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(s[i]=='W') w++;
		if(s[i]=='L') l++;
		if(w>=11||l>=11)
		{
			if(w-l>=2||l-w>=2)
			{
				cout<<w<<":"<<l<<endl;
				w=0;
				l=0;
			}
		}
	}
	cout<<w<<":"<<l<<endl<<endl;
	w=0;
	l=0;
	for(int i=1;i<=n;i++)
	{
		if(s[i]=='W') w++;
		if(s[i]=='L') l++;
		if(w>=21||l>=21)
		{
			if(w-l>=2||l-w>=2)
			{
				cout<<w<<":"<<l<<endl;
				w=0;
				l=0;
			}
		}
	}
	cout<<w<<":"<<l<<endl;
	return 0;
}
