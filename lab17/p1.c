#include<stdio.h>
void main(){
    int a;
    int*ptr;
    printf("enter value:");
    scanf("%d",&a);
    ptr=&a;
    printf("%d  %d",*ptr,ptr);
}