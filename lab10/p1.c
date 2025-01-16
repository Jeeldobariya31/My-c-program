#include <stdio.h>
void main()
{
    int n,rim,sum;
    printf("Enter number = ");
    scanf("%d",&n);
    sum=n%10;
    while(n>=9)
    {
       
        n=n/10;
    }
    sum=sum+n;
    printf("Total = %d",sum);
}
