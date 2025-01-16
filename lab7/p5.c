#include<stdio.h>
void main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    (a%2==0)?(printf("%d is the even num",a)):(printf("%d is the odd num",a));
}