#include<stdio.h>
void main(){
    int sum,i,n,m;
    sum=0;
    i=0;
    printf("enter the first number");
    scanf("%d",&n);
    printf("enter the second number");
    scanf("%d",&m);
    while(i<m)
    {
        sum=sum+n;
        i++;
    }
    printf("%d",sum);


}