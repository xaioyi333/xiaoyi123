#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 100002
//菜单栏
void Meau() {
	printf("    A.实现姓名、编号、手机号、城市、单位、身份证、邮箱的录入\n");
	printf("    B.按姓名排序\n");
	printf("    C.按手机号降序排序\n");
	printf("    D.按城市分别统计人数，并输出到屏幕上\n");
	printf("    E.退出\n");
}
//定义结构体 
struct information {
	char name[100], nomber[100], phone[100], city[100];
	char workcity[100], card[100], email[100];
}temp;
struct information a[N];
//操作A
void A(int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("请输入第%d个人的信息：\n", i + 1);
		scanf("%s%s%s%s%s%s%s", a[i].name, a[i].nomber, a[i].phone, a[i].city, a[i].workcity, a[i].card, a[i].email);
	}
}
//操作B(ASSIC码)
void B(int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++)
			if ( strcmp( strlwr(a[j].name), strlwr(a[j + 1].name) ) > 0 ) {
				strcpy(temp.name, a[j].name);
				strcpy(a[j].name, a[j + 1].name);
				strcpy(a[j + 1].name, temp.name);
			}
	}
	printf("按姓名排序为：\n");
	for ( i = 0; i < n; i++)
	{
		printf("%d: ",i+1);
		printf("%s\n", a[i].name);
	}
}
//操作C
void C(int n) {
	int i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = 0; j < n - 1 - i; j++)
			if (strcmp(a[j].phone, a[j + 1].phone) < 0) {
				strcpy(temp.phone, a[j].phone);
				strcpy(a[j].phone, a[j + 1].phone);
				strcpy(a[j + 1].phone, temp.phone);
			}
	}
	printf("按手机号降序排序为：\n");
	for ( i = 0; i < n; i++)
	{
		printf("%d: ",i+1);
		printf("%s\n", a[i].phone);
	}
}
// 哈希 
int h[N];
int ha(char m[N]) {
	int i, k = 0;
	for (i = 0; i < strlen(m); i++) {
		k = k * 131 + m[i] - 47;
	}
	return k % 100003;
}
//操作D
void D(int n) {
	int state[N] = {0};
	int i;
	for (i = 0; i < n; i++) {
		h[ha(a[i].city)]++;

	}
	for (i = 0; i < n; i++) {
		if(state[ha(a[i].city)]==0)
		printf("%s : %d\n", a[i].city, h[ha(a[i].city)]);
		state[ha(a[i].city)] = 1;
	}
	for (i = 0; i < n; i++) {
		h[ha(a[i].city)]=0;

	}
}
int main() {
	int n;
	char op;
	do {
		Meau();
		printf("请输入想进行的操作：");
		scanf("%c", &op);
		printf("\n");
		switch (op) {
		case 'A':printf("请输入总人数:"); scanf("%d", &n); A(n); break;
		case 'B':B(n); break;
		case 'C':C(n); break;
		case 'D':D(n); break;
		case 'E':exit(0);//结束进程（整个程序）
		default:printf("输入错误！");
		}
	} while (1);
	return 0;
}

