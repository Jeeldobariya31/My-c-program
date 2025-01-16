#include <stdio.h>
void main() {
    int i, j,n,fac=1;
    float sum=1;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i =1; i<=n;i++) {
        for(j =1; j<=i;j++) {
        fac=fac*j;
        }
         sum=sum+(1.0/fac);
    }
    printf("%f",sum);
}