#include <stdio.h>
int maximum(int,int,int);
void main()
{
    int num1,num2,num3;
    printf("enter num1 = ");
    scanf("%d",&num1);
    printf("enter num2 = ");
    scanf("%d",&num2);
     printf("enter num3 = ");
    scanf("%d",&num3);
    int max=maximum(num1,num2,num3);
    printf("maximum = %d\n",max);
}
int maximum(int num1,int num2,int num3)
{ 
if (num1 >= num2 && num1 >= num3) {
        return num1;
    } else if (num2 >= num1 && num2 >= num3) {
         return num2;
    } else {
         return num3;
    }
}