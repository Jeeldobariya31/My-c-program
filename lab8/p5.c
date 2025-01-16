#include<stdio.h>
void main(){
    int n,i,oddcount,evencount;
    i=1;
    oddcount=0;
    evencount=0;
    while(i<=10){
        printf("enter the number:");
        scanf("%d",&n);
       
        if(n%2==0){
            evencount=evencount+1;
            i++;
        }
        else{
            oddcount=oddcount+1;
            i++;
        }

    }
    printf("odd count is:%d",oddcount);
    printf("\n");
    printf("even count is:%d",evencount);
}