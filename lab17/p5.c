#include<stdio.h>
void main(){
    int j,i;
    printf("enter the size:");
    scanf("%d",&j);
    int a[j];
    int *ptr;
    ptr=&a[j];
    for(i=0;i<j;i++){
        printf("enter an element:");
        scanf("%d",&a[i]);
    }
     for(i=0;i<j;i++){
        printf("%d ",*(a+i));
     }
}