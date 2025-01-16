#include<stdio.h>
void main(){
    int n,rem;
    printf("Enter the number:");
    scanf("%d",&n);
    while(n!=0){
        rem=n%2;
        printf("%d",rem);
        rem=0;
        n=n/2;
    }
    printf("\n");
printf("PLEASE START READING FROM REVERSE");
}