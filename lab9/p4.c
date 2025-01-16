#include<stdio.h>
void main(){
    int i,n,fac;
    i=1;
    fac=1;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<=n){
      fac=fac*i;
      i++;
    }
    printf("factoriyal is :%d",fac);
}