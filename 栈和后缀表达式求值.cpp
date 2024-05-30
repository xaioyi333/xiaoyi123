#include<iostream>
using namespace std;
const int N =100010;
int top=0,M,stk[N];


int main(){
	cin>>M;
	while(M--){
		string op;
		cin>>op;
		if(op=="push"){
			int x;
			scanf("%d",&x);
			top++;
			stk[top]=x;
		}
		if(op=="pop"){
			top--;
		}
		if(op=="empty"){
			if(top>0){
				printf("NO\n");
			}
			else printf("YES\n");
		}
		if(op=="query"){
			printf("%d\n",stk[top]);
		}
	}
}
