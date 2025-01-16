#include<stdio.h>

void printarray(int size,int a[]);

void main()
{
    int size,i;
    printf("Enter the array size:");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++){
        printf("enter element:");
        scanf("%d",&a[i]);
    }
    printarray(size,a);
}
void printarray(int size,int a[]){
    int i;
    for(i=0;i<size;i++){
       printf("%d ",a[i]);
    }
}