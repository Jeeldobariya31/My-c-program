#include<stdio.h>
#include<math.h>
void main(){
    int n;
    float sqrtn;
    n=0;
    while(n<10){
        sqrtn=sqrt(n);
         printf("%d %f",n,sqrtn);
         printf("\n");
        n=n+1;

    }
}