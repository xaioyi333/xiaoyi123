#include <stdio.h>
#include<stdlib.h> 
int main()
{
	FILE *fp;
	int i;
	char ch,fname[10];
	printf("�������ļ���:");
	gets(fname);
	if ((fp=fopen(fname,"w"))==NULL)
	{
	 	printf("���ܴ��ļ���\n");exit(0);		 
	}
	while((ch=getchar())!='!')
	{
		fputc(ch,fp);//�����ſ�ʡ�� 
	}
	fclose(fp);
	return 0;
}

