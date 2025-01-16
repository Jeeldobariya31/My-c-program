#include<stdio.h>

void swaping(int,int,int*,int*);

void main(){
    int num1, num2,swapnum1,swapnum2;
    printf("Enter the first number: ");
    scanf("%d", &num1);  
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    swaping(num1,num2,&swapnum1,&swapnum2);
    printf("after swaping:\n");
    printf("num1=%d",swapnum1);
    printf("\n");
    printf("num2=%d",swapnum2);
}
void swaping(int num1,int num2,int *res1,int *res2)
{
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    *res1=num1;
    *res2=num2;
}