#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int a[1000010],b[1000010],c[1000010],ans[2000010],a_len,b_len,len;
void read(int *a,int &length){
	string s;
	cin>>s;
	length=s.size();
	for(int i=0;i<length;i++){
		a[i]=s[i]-48;
	} 
	reverse(a,a+length);
}
int main(){
	read(a,a_len);
	read(b,b_len);
	len=a_len+b_len-1;
	for(int i=0;i<a_len;i++){
		for(int j=0;j<b_len;j++){
			ans[i+j]+=a[i]*b[j];	
		}
	}
	for(int i=0;i<=len;i++){
		if(ans[i]>9){
			ans[i+1]+=ans[i]/10;
			ans[i]%=10;
		}
	}
	while(ans[len]) len++;
	for(int i=len-1;i>=0;i--){
		cout<<ans[i];
	}
	return 0;
} 
