#include<stdio.h>
void main()
{
    int i,size,temp;
    printf("enter size:");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++){
        printf("enter value:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<size/2;i++){
        temp=a[i];
        a[i]=a[size-i-1];
        a[size-i-1]=temp;
    }
    for(i=0;i<size;i++){
    printf("%d ",a[i]);
    }
    
}