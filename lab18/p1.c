#include <stdio.h>
int add(int,int);
void main()
{
    int num1,num2,sum;
    printf("enter num1 = ");
    scanf("%d",&num1);
    printf("enter n2 = ");
    scanf("%d",&num2);
    sum=add(num1,num2);
    printf("sum is = %d",sum);
}
int add(int num1,int num2)
{
    int sum;
    sum=num1+num2;
    return sum;
}