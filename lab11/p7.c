#include<stdio.h>
void main(){
    int i,n,temp,count=0,digit;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=9;i++){
        temp=n;
        count=0;
        while(temp!=0){
            digit=temp%10;
            if(digit==i){
                count++;
            }
            temp=temp/10;
        }
        if(count>0){
        printf("%d-%d\n",i,count);
    }
    }
    
}