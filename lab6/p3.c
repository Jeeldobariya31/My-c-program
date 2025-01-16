#include<stdio.h>
void main(){
    char ch;
    printf("Enter character");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90){
        printf("upercase");
    }
    else if(ch>=97 && ch<=122){
    printf("lowercase");
    }
    else if(ch>=48 && ch<=57){
        printf("digit");
    }
    else{
        printf("spaicial symbol");
    }
}