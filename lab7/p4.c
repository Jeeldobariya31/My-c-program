#include<stdio.h>
void main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
(a>b)?((a>c)?printf("%d is largest",a):printf("%d is largest",b)):((b>c)?printf("%d is largest",b):printf("%d is largest",c));
}