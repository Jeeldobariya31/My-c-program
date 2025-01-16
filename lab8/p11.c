#include<stdio.h>
void main(){
    int a,b,quo=0,rem;
    printf("enter two number:");
    scanf("%d %d",&a,&b);
    while(a>=b){
        a=a-b;
        quo++;
    }
    rem=a;
    printf("quotient=%d\nreminder=%d",quo,rem);
}