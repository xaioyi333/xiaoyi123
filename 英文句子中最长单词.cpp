#include <iostream>
#include <string>
using namespace std;
int main(){
	char a[1000],ans[1000];
	int n=0,i,j,maxlen=-1,count;
	while((a[n]=getchar())!='\n'){
		n++;
	}//输入英文句子 
	for(int i=0;i<n;i++){
		
		if(a[i]!=' '&&a[i]!='.'){
			count++; //计每个单词的长度 
			}
		else{
		if(count>maxlen){
			maxlen=count;
			for(int j=0;j<count;j++){
				ans[j]=a[i-count+j];
				//把这个单词赋值给新数组 
				}
			}
		
		count=0;//计下一单词前归零 
		}
	}
	for(int i=0;i<maxlen;i++){
		cout<<ans[i];
	}
	cout<<endl<<maxlen;
}
