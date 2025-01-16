#include <stdio.h>
void main()
{
    int n,rim,ans=0,temp;
    printf("Enter  number = ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        rim=n%10;
       
        ans=(ans*10)+rim;
        n=n/10;
    }
    if(temp==ans){
        printf("number is pelindrom");
    }
    else{
        printf("number is  not pelindrom");
    }
}