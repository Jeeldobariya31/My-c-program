#include<stdio.h>
void main(){
    int a,b,sum;
    int *pa,*pb,*ps;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    pa=&a;
    pb=&b;
    *ps=*pa+*pb;
    printf("SUM Is=%d",*ps);
}