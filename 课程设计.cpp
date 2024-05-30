#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<fstream>
#define N 1000
//后面要弄成文件形式
std::ofstream fout("a.txt");
void Meau() {
	printf("    学 生 选 课 系 统\n\n");
	printf("    1.课程信息录入\n");//要密码 
	printf("    2.课程信息浏览\n");
	printf("    3.课程信息查询\n");
	printf("    4.课程信息修改\n");//要密码 
	printf("    5.学生选修课程\n");
	printf("    0.退出\n");
}
//定义 课程结构体 
struct Course {
	char number[10], name[30], character[30];
	int alltime, teach_t, test_t, credit, term;
};
struct Course a[N];
struct Student {
	char name_stu[30];
	struct Course s[N];
	int b[N];//0代表没选，1代表选择 
};
struct Student stu[N];
//录入功能 
void input(int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("请录入第%d门课程的信息:\n", i + 1);
		printf("编号：");
		scanf("%s", a[i].number);
		fout << "编号：" << a[i].number << '\n';
		printf("名称：");
		scanf("%s", a[i].name);
		fout << "名称：" << a[i].name << '\n';
		printf("课程性质：");
		scanf("%s", a[i].character);
		fout << "课程性质：" << a[i].character << '\n';
		printf("总学时：");
		scanf("%d", &a[i].alltime);
		fout << "总学时：" << a[i].alltime << '\n';
		printf("授课学时：");
		scanf("%d", &a[i].teach_t);
		fout << "授课学时：" << a[i].teach_t << '\n';
		printf("实验或上机学时：");
		scanf("%d", &a[i].test_t);
		fout << "实验或上机学时：" << a[i].test_t << '\n';
		printf("学分：");
		scanf("%d", &a[i].credit);
		fout << "学分：" << a[i].credit << '\n';
		printf("开课学期：");
		scanf("%d", &a[i].term);
		fout << "开课学期：" << a[i].term << '\n';
	}
}
//浏览功能
void look(int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("第%d门课程的信息:\n", i + 1);
		printf("编号：%s\t", a[i].number);
		printf("名称：%s\t", a[i].name);
		printf("课程性质：%s\n", a[i].character);
		printf("总学时：%d   ", a[i].alltime);
		printf("授课学时：%d   ", a[i].teach_t);
		printf("实验或上机学时：%d\n", a[i].test_t);
		printf("学分：%d   ", a[i].credit);
		printf("开课学期：%d\n", a[i].term);
	}
}
//查询功能
int cmp1(const void* a, const void* b) {
	Course c = *(Course*)a;
	Course d = *(Course*)b;
	return d.credit - c.credit;
	//降序
}
int cmp2(const void* a, const void* b) {
	Course c = *(Course*)a;
	Course d = *(Course*)b;
	return d.character - c.character;
	//降序
}
void refer(int n) {
	int i, op;
	char f[20];
	printf("1.按学分降序查询,2.按课程性质查询,3.查询单门课程\n");
	printf("请输入你想要的查询方式：");
	scanf("%d", &op);
	switch (op) {
	case 1:
		qsort(a, n, sizeof(a[0]), cmp1);
		for (i = 0; i < n; i++) {
			printf("该门课程信息如下：\n");
			printf("编号：%s\t", a[i].number);
			printf("名称：%s\t", a[i].name);
			printf("课程性质：%s\n", a[i].character);
			printf("总学时：%d   ", a[i].alltime);
			printf("授课学时：%d   ", a[i].teach_t);
			printf("实验或上机学时：%d\n", a[i].test_t);
			printf("学分：%d   ", a[i].credit);
			printf("开课学期：%d\n", a[i].term);
		}
		break;
	case 2:
		qsort(a, n, sizeof(a[0]), cmp2);
		for (i = 0; i < n; i++) {
			printf("该门课程信息如下：\n");
			printf("编号：%s\t", a[i].number);
			printf("名称：%s\t", a[i].name);
			printf("课程性质：%s\n", a[i].character);
			printf("总学时：%d   ", a[i].alltime);
			printf("授课学时：%d   ", a[i].teach_t);
			printf("实验或上机学时：%d\n", a[i].test_t);
			printf("学分：%d   ", a[i].credit);
			printf("开课学期：%d\n", a[i].term);
		}
		break;
	case 3:
		printf("请输入你想要查询的课程的名称：");
		scanf("%s", f);
		for (i = 0; i < n; i++) {
			if (strcmp(f, a[i].name) == 0) {
				printf("该门课程信息如下：\n");
				printf("编号：%s\t", a[i].number);
				printf("名称：%s\t", a[i].name);
				printf("课程性质：%s\n", a[i].character);
				printf("总学时：%d   ", a[i].alltime);
				printf("授课学时：%d   ", a[i].teach_t);
				printf("实验或上机学时：%d\n", a[i].test_t);
				printf("学分：%d   ", a[i].credit);
				printf("开课学期：%d\n", a[i].term);
				break;
			}
		}

	}

}
//信息修改功能
void change(int n) {
	char c[20];
	int num, i, j, d;
	printf("请输入你想要修改的课程的名称：");
	scanf("%s", c);
	for (i = 0; i < n; i++) {
		if (strcmp(c, a[i].name) == 0) {
			printf("该门课程信息如下：\n");
			printf("1.编号：%s\t", a[i].number);
			printf("2.名称：%s\t", a[i].name);
			printf("3.课程性质：%s\n", a[i].character);
			printf("4.总学时：%d   ", a[i].alltime);
			printf("5.授课学时：%d   ", a[i].teach_t);
			printf("6.实验或上机学时：%d\n", a[i].test_t);
			printf("7.学分：%d   ", a[i].credit);
			printf("8.开课学期：%d\n", a[i].term);
			do {
				printf("请输入要修改的地方对应的数字,其他任意键则退出修改程序：\n");
				scanf("%d", &d);
				switch (d) {
				case 1:
					printf("编号原来为：%s\n", a[i].number);
					printf("请修改编号：");
					scanf("%s", a[i].number);
					printf("修改后为：%s\n", a[i].number); break;
				case 2:
					printf("名称原来为：%s\n", a[i].name);
					printf("请修改名称：");
					scanf("%s", a[i].name);
					printf("修改后为：%s\n", a[i].name); break;
				case 3:
					printf("课程性质原来为：%s\n", a[i].character);
					printf("请修改课程性质：");
					scanf("%s", a[i].character);
					printf("修改后为：%s\n", a[i].character); break;
				case 4:
					printf("总学时原来为：%d\n", a[i].alltime);
					printf("请修改总学时：");
					scanf("%d", &a[i].alltime);
					printf("\n修改后为：%d\n", a[i].alltime); break;
				case 5:
					printf("授课学时原来为：%d\n", a[i].teach_t);
					printf("请修改授课学时：");
					scanf("%d", &a[i].teach_t);
					printf("\n修改后为：%d\n", a[i].teach_t); break;
				case 6:
					printf("实验或上机学时原来为：%d\n", a[i].test_t);
					printf("请修改实验或上机学时：");
					scanf("%d", &a[i].test_t);
					printf("\n修改后为：%d\n", a[i].test_t); break;
				case 7:
					printf("学分原来为：%d\n", a[i].credit);
					printf("请修改学分：");
					scanf("%d", &a[i].credit);
					printf("\n修改后为：%d\n", a[i].credit); break;
				case 8:
					printf("开课学期原来为：%d\n", a[i].term);
					printf("请修改开课学期：");
					scanf("%d", &a[i].term);
					printf("\n修改后为：%d\n", a[i].term); break;
				default:return;
				}
			} while (1);

		}
	}
}
//学生选修课程 
int cmp3(const void* a, const void* b) {
	Course c = *(Course*)a;
	Course d = *(Course*)b;
	return c.number - d.number;
	//顺序
}
void Student_select(int n) {
	int k = 1;//第k个学生选择 
	int i, j = 1, sum = 0; char num[20];
	qsort(a, n, sizeof(a[0]), cmp3);
	for (i = 0; i < n; i++) {
		if (strcmp(a[i].character, "选修课") == 0) {
			printf("编号：%s\t", a[i].number);
			printf("名称：%s\t", a[i].name);
			printf("总学时：%d   ", a[i].alltime);
			printf("授课学时：%d   ", a[i].teach_t);
			printf("实验或上机学时：%d\n", a[i].test_t);
			printf("学分：%d   ", a[i].credit);
			printf("开课学期：%d\n", a[i].term);
		}
	}
	printf("请选择你想选修的课程（学分之和不能低于60）\n");
	printf("请输入课程对应编号（输入“000 ”结束选择）：\n");
	do {
		scanf("%s", num);
		for (i = 0; i < n; i++) {
			if (strcmp(num, a[i].number) == 0) {
				stu[k].s[i]=a[i];//学生选修课信息处理 
				sum += a[i].credit;
				stu[k].b[i] = 1;
			}
		}
	} while (strcmp(num, "000"));
	if (sum >= 60) {
		printf("你选择的选修课程分别是：\n");
		for (i = 0; i < n; i++) {
			if (stu[k].b[i] == 1) {
				printf("%d.%s\n", j, a[i].name);
				j++;
			}
		}
		printf("总学分为：", sum);
	}
	else {
		printf("你选的课程总学分低于60分,请重新选择！\n");
		Student_select(n);
	}
	k++;
}
int main() {
	int op;
	int mm, n;
	do {
		Meau();
		printf("请输入你想进行的操作对应的数字\n");
		scanf("%d", &op);
		switch (op)
		{
		case 1:
			printf("需要验证身份，请输入密码：");
			scanf("%d", &mm);
			if (mm == 321) {
				printf("验证成功！\n");
				printf("请输入要录入的总课程数：");
				scanf("%d", &n);
				input(n);
				break;
			}
			else {
				printf("验证失败。\n"); break;
			}
		case 2:look(n); break;
		case 3:refer(n); break;
		case 4:
			printf("需要验证身份，请输入密码：");
			scanf("%d", &mm);
			if (mm == 321) {
				printf("验证成功！\n");
				change(n); break;
			}
			else {
				printf("验证失败。\n"); break;
			}
		case 5:Student_select(n); break;
		case 0:exit(0);
		}
	} while(1);
	return 0;
}
