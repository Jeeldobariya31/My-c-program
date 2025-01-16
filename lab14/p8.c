#include<stdio.h>
void main()
{
    int i,j,size,temp;
    printf("enter size:");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++){
        printf("enter value:");
        scanf("%d",&a[i]);
    }
    for(i=0; i<size; i++)
    {
        for(j=0; j<size-i-1; j++) {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("short array in ascanding order is \n");
    for(i=0;i<size;i++)
    {
    printf("%d ",a[i]);
    }
}