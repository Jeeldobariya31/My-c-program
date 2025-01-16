#include<stdio.h>
#include<string.h>
void main(){
    int len;
    char a[1000];
    printf("enter the string:");
        gets(a);
        printf("%s",a);
        len=strlen(a);
        printf("\n");
        printf("length=%d",len);
}