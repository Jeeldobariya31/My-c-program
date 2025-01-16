#include<stdio.h>
void main(){
    int i,n,fac;
    fac=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      fac=fac*i;
    }
    printf("factoriyal is :%d",fac);
}