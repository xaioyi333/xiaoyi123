#include<stdio.h>
#include<stdlib.h>
#define N 100
using namespace std;
int i,j;
float a[5][3];
float aver_s[5],aver_b[3];

void aver_stu(float a[5][3]){
	float cnt;
	for(i=0;i<5;i++){
		cnt=0;
		for(j=0;j<3;j++){
			cnt+=a[i][j];
		}
		aver_s[i]=cnt/3;
	}
	for(i=0;i<5;i++){
		printf("��%d��ѧ����ƽ����Ϊ%f\n",i+1,aver_s[i]);
	}
}
void aver_sub(float a[5][3]){
	float cnt;
	for(i=0;i<3;i++){
		cnt=0;
		for(j=0;j<5;j++){
			cnt+=a[j][i];
		}
		aver_b[i]=cnt/5;
	}
	for(i=0;i<3;i++){
		printf("��%d��ѧ�Ƶ�ƽ����Ϊ��%f\n",i+1,aver_b[i]);
	}
}
void max_(float a[5][3]){
	float max=a[0][0];
	int s,k;
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			if(a[i][j]>max){
				max=a[i][j];
				s=i;
				k=j;
			}
		}
	}
	printf("��߷���Ϊ��%f\n�ǵ�%d��ѧ����%d�ſγ�\n",max,s,k);
}
void meau(){
	char op;
	printf("������Ҫ���еĲ�����");
	printf("        1.����ÿ��ѧ����ƽ����\n");
	printf("        2.����ÿ�ſγ̵�ƽ����\n");
	printf(" 3.�����߷���������Ӧ��ѧ���Ϳγ�\n");
	printf("        0.�˳�\n");
	scanf("%c",&op);
	switch(op){
		case'1':aver_stu(a);break;
		case'2':aver_sub(a);break;
		case'3':max_(a);break;
		case'0':exit(0);
		defluat:printf("error!");
	}
}
int main(){
	int i,j;
	char op;
	printf("������ѧ���ĳɼ���"); 
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			scanf("%f",&a[i][j]);
			
		}
	}
	do{
		printf("������Ҫ���еĲ�����");
		printf("        1.����ÿ��ѧ����ƽ����\n");
		printf("        2.����ÿ�ſγ̵�ƽ����\n");
		printf(" 3.�����߷���������Ӧ��ѧ���Ϳγ�\n");
		printf("        0.�˳�\n");
		scanf("%c",&op);
		switch(op){
			case'1':aver_stu(a);break;
			case'2':aver_sub(a);break;
			case'3':max_(a);break;
			case'0':exit(0);
			defluat:printf("error!");
		}
	}while(1);
}
