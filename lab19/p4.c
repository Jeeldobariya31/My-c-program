#include<stdio.h>
#include<string.h>

void main(){
    char str[1000],ch;
    printf("Enter the string :");
    gets(str);
    int i,count;
     printf("enter the character");
        scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++){
        
      if(str[i]<='Z'&& str[i]>='A'||str[i]<='z'&&str[i]>='a'){
        if(ch==str[i]){
        printf("%c ",ch);
        count++;
        }
      }
    }
    printf("Total character is=%d",count);
}