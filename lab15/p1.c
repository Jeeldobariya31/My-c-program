#include<stdio.h>
void main()
{
    int i,j,size,temp;
    printf("enter size:");
    scanf("%d",&size);
    int a[size],b[size];
    for(i=0;i<size;i++){
        printf("enter value:");
        scanf("%d",&a[i]);
    }
    for(i=0; i<size; i++)
    {
        for(j=i; j<size; j++) {
            
                temp = a[i];
                a[i] = b[j];
                b[j] = temp;
            
        }
    }
    for(j=0;j<size;j++)
    {
    printf("%d ",b[j]);
    }
}
