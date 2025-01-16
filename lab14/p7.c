#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,size,sum=0;
    float avg,hm,gm,sum1=0,mul=1;
    printf("enter size:");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++){
        printf("enter value:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++){
        sum=sum+a[i];
    }   
    avg=sum/(i*(1.0));
    printf("avg:%f\n",avg);
    for(i=0;i<size;i++){
        sum1=sum1+(1/(a[i]*1.0));
    }  
    hm=size/sum1;
    printf("harmonic mean=%f\n",hm);
    for(i=0;i<size;i++){
        mul=mul*a[i];
    } 
    gm=pow(mul,1/(size*1.0));
    printf("geometric mean=%f",gm);
}