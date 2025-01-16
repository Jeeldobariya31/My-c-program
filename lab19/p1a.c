#include<stdio.h>

int fac(int);

void main()
{
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    int result=fac(num);
    printf("%d",result);
}
int fac(int num)
{
  int i,mul=1;
  for(i=1;i<=num;i++)
  {
    mul=mul*i;
  }
  return mul;
}