#include <iostream>
#include <string>
using namespace std;
int main(){
	char a[1000],ans[1000];
	int n=0,i,j,maxlen=-1,count;
	while((a[n]=getchar())!='\n'){
		n++;
	}//����Ӣ�ľ��� 
	for(int i=0;i<n;i++){
		
		if(a[i]!=' '&&a[i]!='.'){
			count++; //��ÿ�����ʵĳ��� 
			}
		else{
		if(count>maxlen){
			maxlen=count;
			for(int j=0;j<count;j++){
				ans[j]=a[i-count+j];
				//��������ʸ�ֵ�������� 
				}
			}
		
		count=0;//����һ����ǰ���� 
		}
	}
	for(int i=0;i<maxlen;i++){
		cout<<ans[i];
	}
	cout<<endl<<maxlen;
}
