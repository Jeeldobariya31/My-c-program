#include<stdio.h>
void main(){
    int a;
    float b;
    double c;
    char ch;
    int *ptr1;
    float *ptr2;
    double *ptr3;
    char *ptr4;
    printf("enter charecter value:");
    scanf("%c",&ch);
    printf("enter int value:");
    scanf("%d",&a);
    printf("enter float value:");
    scanf("%f",&b);
    printf("enter double value:");
    scanf("%f",&c);
    ptr1=&a;
    ptr2=&b;
    ptr3=&c;
    ptr4=&ch;
    printf("%d  %d",*ptr1,ptr1);
    printf("\n");
    printf("%f  %d",*ptr2,ptr2);
     printf("\n");
    printf("%f  %d",*ptr3,ptr3);
     printf("\n");
    printf("%ch  %d",*ptr4,ptr4);
}