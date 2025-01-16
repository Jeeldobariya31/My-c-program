#include<stdio.h>
void main()
{
    int n,m,i;
    printf("remember always:n<m\n");
    printf("Enter first number:");
    scanf("%d",&n);
    printf("Enter second number:");
    scanf("%d",&m);
    i=n;
    while(i<=m)
    {
        if(i%2==0)
        {
            printf("%d",i);
            i++;
            printf("\n");
        }
        else{
            i++;
        }
    }
}