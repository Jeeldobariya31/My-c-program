#include<stdio.h>
#include<string.h>

void main(){
    char str1[1000];
    char str2[1000];
    printf("Enter the string:");
    gets(str1);
    strcpy(str2,str1);
    strrev(str1);
    puts(str1);
    if(strcmp(str1,str2)==0){
        printf("string is pelindrome\n");
    }
    else{
     printf("string is not  pelindrome\n");
    }
}