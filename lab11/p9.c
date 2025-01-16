#include<stdio.h>
void main(){
    int i,n,temp,fd,ld,div=1;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    ld=temp%10;
    while(temp>=10){
        temp=temp/10;
        div=div*10;
    }
    fd=temp;
    int sn=ld*div+(n%div)-ld+fd;
    printf("swaped number is :%d",sn);
}
