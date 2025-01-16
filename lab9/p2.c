#include<stdio.h>
void main(){
    int n,mul,i;
    i=1;
    printf("enter the number:");
    scanf("%d",&n);
    while(i<=10){
        printf("%d*%d=%d",n,i,n*i);
        printf("\n");
        i++;
    }
}