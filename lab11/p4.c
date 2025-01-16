#include<stdio.h>
void main(){
    int x,y,i,mul=1;
    printf("enter the value of x and y in form of:x^y\n");
    printf("enter the x:");
    scanf("%d",&x);
    printf("enter the y:");
    scanf("%d",&y);
    for(i=1;i<=y;i++){
        mul=mul*x;
    }
    printf("x^y=%d",mul);
}