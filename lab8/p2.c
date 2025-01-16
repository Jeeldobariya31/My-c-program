#include<stdio.h>
void main()
{
    int i,n;
    i=1;
    n=10;
    while(i<=n)
    {
        if(i%2!=0)
        {
            printf("%d",i);
            i=i+1;
              printf("\n");
        }
        else
        {
            i=i+1;
        }
    }
    
    
}