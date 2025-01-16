#include<stdio.h>
void main(){
    int n,i=1,flag=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n/2){
        if(n%2==0){
        flag=1;
      break;
      }
      i++;
    }
    if(flag==0){
        printf("prime mumber");
    }
    else{
        printf(" nunber is not prime");
    }
}