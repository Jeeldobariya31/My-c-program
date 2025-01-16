#include<stdio.h>
void main(){
    int i,n;
    i=1;
    n=10;
    do{
    if(i%2!=0){
        printf("%d",i);
        i++;
        printf("\n");
    }
    else{
        i++;
    }
    }
    while(i<=n);

    }