#include <stdio.h>
#include<stdlib.h> 
int main()
{
	FILE *fp;
	int i;
	char ch,fname[10];
	printf("请输入文件名:");
	gets(fname);
	if ((fp=fopen(fname,"w"))==NULL)
	{
	 	printf("不能打开文件！\n");exit(0);		 
	}
	while((ch=getchar())!='!')
	{
		fputc(ch,fp);//花括号可省略 
	}
	fclose(fp);
	return 0;
}

