#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<fstream>
#define N 1000
//����ҪŪ���ļ���ʽ
std::ofstream fout("a.txt");
void Meau() {
	printf("    ѧ �� ѡ �� ϵ ͳ\n\n");
	printf("    1.�γ���Ϣ¼��\n");//Ҫ���� 
	printf("    2.�γ���Ϣ���\n");
	printf("    3.�γ���Ϣ��ѯ\n");
	printf("    4.�γ���Ϣ�޸�\n");//Ҫ���� 
	printf("    5.ѧ��ѡ�޿γ�\n");
	printf("    0.�˳�\n");
}
//���� �γ̽ṹ�� 
struct Course {
	char number[10], name[30], character[30];
	int alltime, teach_t, test_t, credit, term;
};
struct Course a[N];
struct Student {
	char name_stu[30];
	struct Course s[N];
	int b[N];//0����ûѡ��1����ѡ�� 
};
struct Student stu[N];
//¼�빦�� 
void input(int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("��¼���%d�ſγ̵���Ϣ:\n", i + 1);
		printf("��ţ�");
		scanf("%s", a[i].number);
		fout << "��ţ�" << a[i].number << '\n';
		printf("���ƣ�");
		scanf("%s", a[i].name);
		fout << "���ƣ�" << a[i].name << '\n';
		printf("�γ����ʣ�");
		scanf("%s", a[i].character);
		fout << "�γ����ʣ�" << a[i].character << '\n';
		printf("��ѧʱ��");
		scanf("%d", &a[i].alltime);
		fout << "��ѧʱ��" << a[i].alltime << '\n';
		printf("�ڿ�ѧʱ��");
		scanf("%d", &a[i].teach_t);
		fout << "�ڿ�ѧʱ��" << a[i].teach_t << '\n';
		printf("ʵ����ϻ�ѧʱ��");
		scanf("%d", &a[i].test_t);
		fout << "ʵ����ϻ�ѧʱ��" << a[i].test_t << '\n';
		printf("ѧ�֣�");
		scanf("%d", &a[i].credit);
		fout << "ѧ�֣�" << a[i].credit << '\n';
		printf("����ѧ�ڣ�");
		scanf("%d", &a[i].term);
		fout << "����ѧ�ڣ�" << a[i].term << '\n';
	}
}
//�������
void look(int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("��%d�ſγ̵���Ϣ:\n", i + 1);
		printf("��ţ�%s\t", a[i].number);
		printf("���ƣ�%s\t", a[i].name);
		printf("�γ����ʣ�%s\n", a[i].character);
		printf("��ѧʱ��%d   ", a[i].alltime);
		printf("�ڿ�ѧʱ��%d   ", a[i].teach_t);
		printf("ʵ����ϻ�ѧʱ��%d\n", a[i].test_t);
		printf("ѧ�֣�%d   ", a[i].credit);
		printf("����ѧ�ڣ�%d\n", a[i].term);
	}
}
//��ѯ����
int cmp1(const void* a, const void* b) {
	Course c = *(Course*)a;
	Course d = *(Course*)b;
	return d.credit - c.credit;
	//����
}
int cmp2(const void* a, const void* b) {
	Course c = *(Course*)a;
	Course d = *(Course*)b;
	return d.character - c.character;
	//����
}
void refer(int n) {
	int i, op;
	char f[20];
	printf("1.��ѧ�ֽ����ѯ,2.���γ����ʲ�ѯ,3.��ѯ���ſγ�\n");
	printf("����������Ҫ�Ĳ�ѯ��ʽ��");
	scanf("%d", &op);
	switch (op) {
	case 1:
		qsort(a, n, sizeof(a[0]), cmp1);
		for (i = 0; i < n; i++) {
			printf("���ſγ���Ϣ���£�\n");
			printf("��ţ�%s\t", a[i].number);
			printf("���ƣ�%s\t", a[i].name);
			printf("�γ����ʣ�%s\n", a[i].character);
			printf("��ѧʱ��%d   ", a[i].alltime);
			printf("�ڿ�ѧʱ��%d   ", a[i].teach_t);
			printf("ʵ����ϻ�ѧʱ��%d\n", a[i].test_t);
			printf("ѧ�֣�%d   ", a[i].credit);
			printf("����ѧ�ڣ�%d\n", a[i].term);
		}
		break;
	case 2:
		qsort(a, n, sizeof(a[0]), cmp2);
		for (i = 0; i < n; i++) {
			printf("���ſγ���Ϣ���£�\n");
			printf("��ţ�%s\t", a[i].number);
			printf("���ƣ�%s\t", a[i].name);
			printf("�γ����ʣ�%s\n", a[i].character);
			printf("��ѧʱ��%d   ", a[i].alltime);
			printf("�ڿ�ѧʱ��%d   ", a[i].teach_t);
			printf("ʵ����ϻ�ѧʱ��%d\n", a[i].test_t);
			printf("ѧ�֣�%d   ", a[i].credit);
			printf("����ѧ�ڣ�%d\n", a[i].term);
		}
		break;
	case 3:
		printf("����������Ҫ��ѯ�Ŀγ̵����ƣ�");
		scanf("%s", f);
		for (i = 0; i < n; i++) {
			if (strcmp(f, a[i].name) == 0) {
				printf("���ſγ���Ϣ���£�\n");
				printf("��ţ�%s\t", a[i].number);
				printf("���ƣ�%s\t", a[i].name);
				printf("�γ����ʣ�%s\n", a[i].character);
				printf("��ѧʱ��%d   ", a[i].alltime);
				printf("�ڿ�ѧʱ��%d   ", a[i].teach_t);
				printf("ʵ����ϻ�ѧʱ��%d\n", a[i].test_t);
				printf("ѧ�֣�%d   ", a[i].credit);
				printf("����ѧ�ڣ�%d\n", a[i].term);
				break;
			}
		}

	}

}
//��Ϣ�޸Ĺ���
void change(int n) {
	char c[20];
	int num, i, j, d;
	printf("����������Ҫ�޸ĵĿγ̵����ƣ�");
	scanf("%s", c);
	for (i = 0; i < n; i++) {
		if (strcmp(c, a[i].name) == 0) {
			printf("���ſγ���Ϣ���£�\n");
			printf("1.��ţ�%s\t", a[i].number);
			printf("2.���ƣ�%s\t", a[i].name);
			printf("3.�γ����ʣ�%s\n", a[i].character);
			printf("4.��ѧʱ��%d   ", a[i].alltime);
			printf("5.�ڿ�ѧʱ��%d   ", a[i].teach_t);
			printf("6.ʵ����ϻ�ѧʱ��%d\n", a[i].test_t);
			printf("7.ѧ�֣�%d   ", a[i].credit);
			printf("8.����ѧ�ڣ�%d\n", a[i].term);
			do {
				printf("������Ҫ�޸ĵĵط���Ӧ������,������������˳��޸ĳ���\n");
				scanf("%d", &d);
				switch (d) {
				case 1:
					printf("���ԭ��Ϊ��%s\n", a[i].number);
					printf("���޸ı�ţ�");
					scanf("%s", a[i].number);
					printf("�޸ĺ�Ϊ��%s\n", a[i].number); break;
				case 2:
					printf("����ԭ��Ϊ��%s\n", a[i].name);
					printf("���޸����ƣ�");
					scanf("%s", a[i].name);
					printf("�޸ĺ�Ϊ��%s\n", a[i].name); break;
				case 3:
					printf("�γ�����ԭ��Ϊ��%s\n", a[i].character);
					printf("���޸Ŀγ����ʣ�");
					scanf("%s", a[i].character);
					printf("�޸ĺ�Ϊ��%s\n", a[i].character); break;
				case 4:
					printf("��ѧʱԭ��Ϊ��%d\n", a[i].alltime);
					printf("���޸���ѧʱ��");
					scanf("%d", &a[i].alltime);
					printf("\n�޸ĺ�Ϊ��%d\n", a[i].alltime); break;
				case 5:
					printf("�ڿ�ѧʱԭ��Ϊ��%d\n", a[i].teach_t);
					printf("���޸��ڿ�ѧʱ��");
					scanf("%d", &a[i].teach_t);
					printf("\n�޸ĺ�Ϊ��%d\n", a[i].teach_t); break;
				case 6:
					printf("ʵ����ϻ�ѧʱԭ��Ϊ��%d\n", a[i].test_t);
					printf("���޸�ʵ����ϻ�ѧʱ��");
					scanf("%d", &a[i].test_t);
					printf("\n�޸ĺ�Ϊ��%d\n", a[i].test_t); break;
				case 7:
					printf("ѧ��ԭ��Ϊ��%d\n", a[i].credit);
					printf("���޸�ѧ�֣�");
					scanf("%d", &a[i].credit);
					printf("\n�޸ĺ�Ϊ��%d\n", a[i].credit); break;
				case 8:
					printf("����ѧ��ԭ��Ϊ��%d\n", a[i].term);
					printf("���޸Ŀ���ѧ�ڣ�");
					scanf("%d", &a[i].term);
					printf("\n�޸ĺ�Ϊ��%d\n", a[i].term); break;
				default:return;
				}
			} while (1);

		}
	}
}
//ѧ��ѡ�޿γ� 
int cmp3(const void* a, const void* b) {
	Course c = *(Course*)a;
	Course d = *(Course*)b;
	return c.number - d.number;
	//˳��
}
void Student_select(int n) {
	int k = 1;//��k��ѧ��ѡ�� 
	int i, j = 1, sum = 0; char num[20];
	qsort(a, n, sizeof(a[0]), cmp3);
	for (i = 0; i < n; i++) {
		if (strcmp(a[i].character, "ѡ�޿�") == 0) {
			printf("��ţ�%s\t", a[i].number);
			printf("���ƣ�%s\t", a[i].name);
			printf("��ѧʱ��%d   ", a[i].alltime);
			printf("�ڿ�ѧʱ��%d   ", a[i].teach_t);
			printf("ʵ����ϻ�ѧʱ��%d\n", a[i].test_t);
			printf("ѧ�֣�%d   ", a[i].credit);
			printf("����ѧ�ڣ�%d\n", a[i].term);
		}
	}
	printf("��ѡ������ѡ�޵Ŀγ̣�ѧ��֮�Ͳ��ܵ���60��\n");
	printf("������γ̶�Ӧ��ţ����롰000 ������ѡ�񣩣�\n");
	do {
		scanf("%s", num);
		for (i = 0; i < n; i++) {
			if (strcmp(num, a[i].number) == 0) {
				stu[k].s[i]=a[i];//ѧ��ѡ�޿���Ϣ���� 
				sum += a[i].credit;
				stu[k].b[i] = 1;
			}
		}
	} while (strcmp(num, "000"));
	if (sum >= 60) {
		printf("��ѡ���ѡ�޿γ̷ֱ��ǣ�\n");
		for (i = 0; i < n; i++) {
			if (stu[k].b[i] == 1) {
				printf("%d.%s\n", j, a[i].name);
				j++;
			}
		}
		printf("��ѧ��Ϊ��", sum);
	}
	else {
		printf("��ѡ�Ŀγ���ѧ�ֵ���60��,������ѡ��\n");
		Student_select(n);
	}
	k++;
}
int main() {
	int op;
	int mm, n;
	do {
		Meau();
		printf("������������еĲ�����Ӧ������\n");
		scanf("%d", &op);
		switch (op)
		{
		case 1:
			printf("��Ҫ��֤��ݣ����������룺");
			scanf("%d", &mm);
			if (mm == 321) {
				printf("��֤�ɹ���\n");
				printf("������Ҫ¼����ܿγ�����");
				scanf("%d", &n);
				input(n);
				break;
			}
			else {
				printf("��֤ʧ�ܡ�\n"); break;
			}
		case 2:look(n); break;
		case 3:refer(n); break;
		case 4:
			printf("��Ҫ��֤��ݣ����������룺");
			scanf("%d", &mm);
			if (mm == 321) {
				printf("��֤�ɹ���\n");
				change(n); break;
			}
			else {
				printf("��֤ʧ�ܡ�\n"); break;
			}
		case 5:Student_select(n); break;
		case 0:exit(0);
		}
	} while(1);
	return 0;
}
