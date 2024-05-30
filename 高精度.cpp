#include<iostream>
#include<algorithm>
#include<string> 
using namespace std;
int a[10090],b[10090],c[10090],ans[10090],a_len,b_len,len;
void read(int *a,int &lenth){
	string s;
	cin>>s;
	lenth=s.size();
	for(int i=0;i<lenth;i++){
		a[i]=s[i]-48;
	}
	reverse(a,a+lenth);
}
int main(){
	int n=0;
	read(a,a_len);
	read(b,b_len);
	for(int i=0;i<10086;i++){
		if(a_len==b_len){
			if(a[i]>b[i])break;
			if(a[i]==b[i])continue;
			if(a[i]<b[i]){
				n=1;break;
			}
		}
		if(a_len<b_len){
			n=1;break;
		}
		if(a_len>b_len){
			n=0;
			break;
		}
	}
	len=max(a_len,b_len);
	if(n==0)
	{
		for(int i=0;i<len;i++){
			ans[i]=a[i]-b[i]-c[i];
			if(ans[i]<0){
				c[i+1]++;
				ans[i]+=10;
			}
		}
	}
	
	else
	{
		for(int i=0;i<len;i++){
			ans[i]=b[i]-a[i]-c[i];
			if(ans[i]<0){
				c[i+1]++;
				ans[i]+=10;
			}
		}
	}
	while(ans[len-1]==0) len--;
	if(n==1) ans[len-1]*=-1;
	if(len<=0)cout<<0;
	for(int i=len-1;i>=0;i--){
		cout<<ans[i];
	}
	return 0;
} 
