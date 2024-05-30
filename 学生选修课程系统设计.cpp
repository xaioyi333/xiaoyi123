#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 100
enum Message{
	
};
void Meau(){
	printf("    学 生 选 课 系 统\n\n");
	printf("    1.课程信息录入\n");//要密码 
	printf("    2.课程信息浏览\n");
	printf("    3.课程信息查询\n");
	printf("    4.课程信息修改\n");//要密码 
	printf("    5.学生选修课程\n");
	printf("    0.退出\n"); 
}
//定义 课程结构体 
struct Course{
	char number[10],name[30],character[30];
	int alltime,teach_t,test_t,credit,term;
};
struct Course a[N];
//录入功能 
void input(int n){
	int i;
	for(i=0;i<n;i++){
		printf("请录入第%d门课程的信息:\n",i+1);
		printf("编号："); 
		scanf("%s",a[i].number);
		printf("名称：");
		scanf("%s",a[i].name);
		printf("课程性质：");
		scanf("%s",a[i].character);
		printf("总学时：");
		scanf("%d",&a[i].alltime); 
		printf("授课学时：");
		scanf("%d",&a[i].teach_t);
		printf("实验或上机学时：");
		scanf("%d",&a[i].test_t);
		printf("学分：");
		scanf("%d",&a[i].credit);
		printf("开课学期："); 
		scanf("%d",&a[i].term); 
	}
} 
//浏览功能
void look(int n){
	int i;
	for(i=0;i<n;i++){
		printf("第%d门课程的信息:\n",i+1);
		printf("编号：%s\t",a[i].number);
		printf("名称：%s\t",a[i].name);
		printf("课程性质：%s\n",a[i].character);
		printf("总学时：%d   ",a[i].alltime);
		printf("授课学时：%d   ",a[i].teach_t);
		printf("实验或上机学时：%d\n",a[i].test_t);
		printf("学分：%d   ",a[i].credit);
		printf("开课学期：%d\n",a[i].term);
	}
}
//查询功能
void refer(int n){
	int i;
	char f[20];
	printf("请输入你想要查询的课程的名称：");
	scanf("%s",f);
	for(i=0;i<n;i++){
		if(strcmp(f,a[i].name)==0){
			printf("该门课程信息如下：\n");
			printf("编号：%s\t",a[i].number);
			printf("名称：%s\t",a[i].name);
			printf("课程性质：%s\n",a[i].character);
			printf("总学时：%d   ",a[i].alltime);
			printf("授课学时：%d   ",a[i].teach_t);
			printf("实验或上机学时：%d\n",a[i].test_t);
			printf("学分：%d   ",a[i].credit);
			printf("开课学期：%d\n",a[i].term);
			break;
		}
	}
} 
//信息修改功能
void change(int n){
	char c[20];
	int num,i,j,d; 
	printf("请输入你想要修改的课程的名称：");
	scanf("%s",c);
	for(i=0;i<n;i++){
		if(strcmp(c,a[i].name)==0){
			printf("该门课程信息如下：\n");
			printf("1.编号：%s\t",a[i].number);
			printf("2.名称：%s\t",a[i].name);
			printf("3.课程性质：%s\n",a[i].character);
			printf("4.总学时：%d   ",a[i].alltime);
			printf("5.授课学时：%d   ",a[i].teach_t);
			printf("6.实验或上机学时：%d\n",a[i].test_t);
			printf("7.学分：%d   ",a[i].credit);
			printf("8.开课学期：%d\n",a[i].term);
			do{
				printf("请输入要修改的地方对应的数字,其他任意键则退出修改程序：\n");
				scanf("%d",&d);
				switch(d){
					case 1: 
						printf("编号原来为：%s\n",a[i].number);
						printf("请修改编号：");
						scanf("%s",a[i].number);
				   	    printf("\n修改后为：%s\n",a[i].number);break;
					case 2:
						printf("名称原来为：%s\n",a[i].name);
						printf("请修改名称：");
						scanf("%s",a[i].name);
						printf("\n修改后为：%s\n",a[i].name);break;
					case 3:
						printf("课程性质原来为：%s\n",a[i].character);
						printf("请修改课程性质：");
						scanf("%s",a[i].character);
						printf("\n修改后为：%s\n",a[i].name);break;						
					case 4:
						printf("总学时原来为：%d\n",a[i].alltime);
						printf("请修改总学时：");
						scanf("%d",&a[i].alltime);
						printf("\n修改后为：%d\n",a[i].alltime);break;
					case 5:
						printf("授课学时原来为：%d\n",a[i].teach_t);
						printf("请修改授课学时：");
						scanf("%d",&a[i].teach_t);
						printf("\n修改后为：%d\n",a[i].teach_t);break;
					case 6:
						printf("实验或上机学时原来为：%d\n",a[i].test_t);
						printf("请修改实验或上机学时：");
						scanf("%d",&a[i].test_t);
						printf("\n修改后为：%d\n",a[i].test_t);break;
					case 7:
						printf("学分原来为：%d\n",a[i].credit);
						printf("请修改学分：");
						scanf("%d",&a[i].credit);
						printf("\n修改后为：%d\n",a[i].credit);break;
					case 8:
						printf("开课学期原来为：%d\n",a[i].term);
						printf("请修改开课学期：");
						scanf("%d",&a[i].term);
						printf("\n修改后为：%d\n",a[i].term);break;
					default :return;	
				}	 
			}while(1);
			
		}
	}
} 
//
void Student_select(){
	
}
int main(){
	int op; 
	int mm,n;
	do{
		Meau();
		printf("请输入你想进行的操作对应的数字\n");
		scanf("%d",&op);
		switch(op)
		{
			case 1:
				printf("需要验证身份，请输入密码：");
		        scanf("%d",&mm);
				if(mm==321){
		        	printf("验证成功！\n");
		        	printf("请输入要录入的总课程数：");
		        	scanf("%d",&n); 
					input(n);
					break; 
				}
				else{
					printf("验证失败。\n");break; 
				}
			case 2:look(n);break;
			case 3:refer(n);break;
			case 4:
				printf("需要验证身份，请输入密码：");
		        scanf("%d",&mm);
		        if(mm==321){
		        	printf("验证成功！\n");
		        	change(n);break;
				}
				else{
					printf("验证失败。\n");break;
				}
			case 5:Student_select();break;
			case 0:exit(0);	
		}
	}while(1);
	
	return 0;
}
