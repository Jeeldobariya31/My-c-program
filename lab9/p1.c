#include<stdio.h>
void main(){
    int n,sum,i;
    sum=0;
    i=1;
    printf("enter the last number of series:");
    scanf("%d",&n);
    while(i<=n){
     if(i%2==0){
        sum=sum-i;
        i++;
     }
     else{     
        sum=sum+i;
        i++;
     }
    } 
    printf("sum is %d:",sum);
}