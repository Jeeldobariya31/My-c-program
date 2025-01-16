#include<stdio.h>

void main()
{
    int x,y,i=1,mul=1;
    printf("enter the value of x and y in form of:x^y\n");
    printf("enter the x:");
    scanf("%d",&x);
    printf("enter the y:");
    scanf("%d",&y);
    while(i<=y){
        mul=mul*x;
        i++;
    }
    printf("x^y=%d",mul);
}