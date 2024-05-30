#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int a[500],b[500],ans[501],c[501],a_len,b_len,len_ans;
void read(int *a,int &len){
	string s;
	cin>>s;
	len=s.length();
	for(int i=0;i<len;i++){
		a[i]=s[i]-48;
	}
	reverse(a,a+len);
}
int main(){
	read(a,a_len);
	read(b,b_len);
	len_ans=max(a_len,b_len);
	for(int i=0;i<=len_ans;i++){
		ans[i]=a[i]+b[i]+c[i];
		if(ans[i]>9){
			c[i+1]=ans[i]/10;
			ans[i]%=10;
		}
	}
	while(ans[len_ans]>0) len_ans++;
	for(int i=len_ans-1;i>=0;i--){
		cout<<ans[i];
	}
	return 0;
}
