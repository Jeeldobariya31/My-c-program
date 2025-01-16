#include<stdio.h>
void main(){
    int n,sqr,sum,m;
    sum=0;
    m=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(m<=n){
        sqr=m*m;
        sum=sum+sqr;
        m++;
    }
    printf("%d",sum);
}
     