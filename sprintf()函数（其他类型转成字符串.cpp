#include <stdio.h>

int main()
{
 char str[80];
 float a=10;
 sprintf(str, "Pi 的值 = %f", a);
 //把引号内的所有内容赋值到字符数组中 
 //第三个可以没有 
 puts(str);
 
 return(0);
}
