#include<iostream>
#include<algorithm>
#include <iomanip>
using namespace std;
const int N = 100010;
int t;

int main()
{
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int a=s[0]-48,b=s[1]-48,sk=s[3]-48,sg=s[4]-48;
		if(a==2) {
			int c=10*a+b-12;
			cout<<setw(2)<<setfill('0')<<c<<s[2]<<s[3]<<s[4]<<" PM"<<endl;
		}
		else if(a==1){
			if(b>2) {
				int c=10*a+b-12;
				cout<<setw(2)<<setfill('0')<<c<<s[2]<<s[3]<<s[4]<<" PM"<<endl;
			}
			else if(b==2){
				cout<<s<<" PM"<<endl;
			}
			else cout<<s<<" AM"<<endl; 
		}
		else if(a==0&&b==0&&sk+sg==0) cout<<"12:00"<<" AM"<<endl;
		else if(a==0&&b==0&&sk+sg>0) cout<<"12:"<<sk*10+sg<<" AM"<<endl;
		else cout<<s<<" AM"<<endl;
	}
    return 0;
}

