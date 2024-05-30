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
		printf("第%d个学生的平均分为%f\n",i+1,aver_s[i]);
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
		printf("第%d门学科的平均分为：%f\n",i+1,aver_b[i]);
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
	printf("最高分数为：%f\n是第%d个学生第%d门课程\n",max,s,k);
}
void meau(){
	char op;
	printf("请输入要进行的操作：");
	printf("        1.计算每个学生的平均分\n");
	printf("        2.计算每门课程的平均分\n");
	printf(" 3.求出最高分数和所对应的学生和课程\n");
	printf("        0.退出\n");
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
	printf("请输入学生的成绩："); 
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			scanf("%f",&a[i][j]);
			
		}
	}
	do{
		printf("请输入要进行的操作：");
		printf("        1.计算每个学生的平均分\n");
		printf("        2.计算每门课程的平均分\n");
		printf(" 3.求出最高分数和所对应的学生和课程\n");
		printf("        0.退出\n");
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
