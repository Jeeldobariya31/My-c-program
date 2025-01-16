#include<stdio.h>
void main()
{
    int i,j,size,sum=0,count=0;
    float avg;
    printf("enter size:");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++){
        printf("enter value:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        sum=sum+a[i];
    }   `
    avg=sum/(i*(1.0));
    for(i=0;i<size;i++){
    if(avg>a[i]){
        count++;
    }
    else{
        count=count+0;
    }
    }
    printf("count:%d",count);
}