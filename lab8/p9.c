#include<stdio.h>
void main(){
    int count,n,sum;
    count=0;
    n=1;
    sum=0;
    while(count<10){
        int square=n*n;
        if(square%10==3){
            sum=sum+square;
            count++;
        }
        n++;
        
    }
    printf("sum: %d,average: %.2f\n",sum,sum/10.0);
}