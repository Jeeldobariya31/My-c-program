#include<stdio.h>
void main(){
int h,m,s,x,y,z;
printf("enter the value of s: ");
scanf("%d",&s);
h=s/3600;
x=s%3600;
m=x/60;
y=x%60;
z=y%60;
s=z;
printf("the time is=%d:%d:%d",h,m,s);
}