#include <stdio.h>
void main() {
    int i, j,n,sum1=0,sum2=0;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i =1; i<=n;i++) {
        sum1=0;
        for(j =1; j<=i;j++) {
        sum1=sum1+j;
        }
         sum2=sum2+sum1;
    }
    printf("%d",sum2);
}
