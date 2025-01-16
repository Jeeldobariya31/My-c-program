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
    if(num==0)
    {
       return 1;
    }
    else{
  return num*fac(num-1);
    }
}