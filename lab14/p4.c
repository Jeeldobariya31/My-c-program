#include<stdio.h>
void main()
{
    int i,j,size,max,min,sum=0;
    float avg;
    printf("enter size:");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++){
        printf("enter value:");
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=1;i<size;i++){
        if(max<a[i]){
            max=a[i];
        }
        if(min>a[i]){
            min=a[i];
        }

    }
    for(i=0;i<size;i++){
        sum=sum+a[i];
    }
    avg=sum/(i*(1.0));
    printf("\n");
    printf("max:%d",max);
    printf("\n");
    printf("min:%d",min);
    printf("\n");
    printf("sum:%d",sum);
     printf("\n");
    printf("avg:%f",avg);
}