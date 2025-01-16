#include<stdio.h>
#include<string.h>

void main(){
    char str1[1000],str2[1000],str3[1000];
    printf("Enter the first string:");
    gets(str1);
     printf("Enter the second string:");
    gets(str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    printf("str1 len1=%d\n",len1);
     printf("str2 len2=%d\n",len2);
    if(strcmp(str1,str2)==0){
        printf("string is same\n");
    }
    else{
     printf("string is not  same\n");
    }
    strcpy(str3,str1);
     strcpy(str1,str2);
     puts(str1);    
     strcpy(str1,str3);
     strcat(str1,str2);
     puts(str1); 
     strcpy(str1,str3);
     strrev(str1);
     strrev(str2);
     printf("reverse of str1:");
     puts(str1);
     strrev(str1);
      printf("reverse of str2:");
     puts(str2);
      strrev(str2);
     strlwr(str1);
     strlwr(str2);
     printf("lower of str1:");
     puts(str1);
     printf("lower of str2:");
     puts(str2);
     strupr(str1);
     strupr(str2);
     printf("uper of str1:");
     puts(str1);
     printf("uper of str2:");
     puts(str2);
}