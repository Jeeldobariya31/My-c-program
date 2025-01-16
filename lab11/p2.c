#include <stdio.h>
void main(){
    int n,i,sum=0;
    printf("enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("sum of 1 to n is:%d",sum);
}