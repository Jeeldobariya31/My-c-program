#include <stdio.h>

void main()
{
    int i,j,count=0;
    printf("enter size");
    scanf("%d",&j);
    int a[j];
       for(i=0; i<j; i++)
    {
        printf("enter value");
        scanf("%d",&a[i]);
        if(a[i]>=0)
        {
            count++;
        }
    }
    printf("positive numbers = %d",count);
    printf("\nnegetive numbers = %d",i-count);
}