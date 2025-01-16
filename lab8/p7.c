#include<stdio.h>
void main()
{
    int n;
    n=101;
    while(n<200)
    {
        if(n%7==0)
        {
         if(n%5!=0)
            printf("%d",n);
              n=n+1;
              printf("\n");
        }
        else{
            n=n+1;
        }
    }
}
    