#include<stdio.h>
int main()
{
  int a,n=0,num=0,w=0,i=0;
  int b[5];
  scanf("%d",&a);
  w=a;
  do{
    
    w/=10;
    num++;
  }
  while(w!=0);
  printf("λ��:%d\n",num);
  do{
      n*=10;
     n+=a%10;
	 b[i]=a%10;
     a/=10;
    i++;
}
  while(a!=0);
  printf("ÿλ����Ϊ:");
  for(int i=num-1;i>=0;i--){
    printf("%d",b[i]);
    if(i>0){
      printf(",");
    }
  }
  printf("\n");
  printf("��������Ϊ:%d",n);
  return 0;
}
