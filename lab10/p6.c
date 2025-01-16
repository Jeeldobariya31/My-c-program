#include<stdio.h>
void main(){
    int n,i=1,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0){
            sum=sum+i;
            i++;
        }
        else{
            i++;
        }
    }
    if(sum==n){
        printf("GIVEN NUMBER IS [PERFECT]");
    }
    else{
        printf("GIVEN NUMBER IS NOT [PERFECT]");
    }

}