#include <stdio.h>
void main()
{
    int n,rim,ans=0,count=0;
    printf("enter number = ");
    scanf("%d",&n);
   while(n>0)
    {
        rim=n%10;
        ans=(ans*10)+rim;
        n=n/10;
        count++;
    }
    while(ans!=0)
    {
        rim=ans%10;
       printf("%d,",rim);
        ans=ans/10;
    }
    printf("\nnumber of digit is:%d",count);
}
    