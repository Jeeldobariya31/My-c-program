#include<stdio.h>
#include<string.h>
void main(){
    char str1[100],str2[1000],ch;
    int i,lenght1,lenght2,j;
    printf("enter str 1:");
    gets(str1);
    printf("enter str 2:");
    gets(str2);
    // str reverse
    lenght1=strlen(str1);
    lenght2=strlen(str2);
    
    for(i=0;i<lenght1/2;i++){
      ch=str1[i];
      str1[i]=str1[lenght1-i-1];
      str1[lenght1-i-1]=ch;
    }
    printf("reverse string 1:");
     printf("%s",str1);
     for(i=0;i<lenght2/2;i++){
      ch=str2[i];
      str2[i]=str2[lenght2-i-1];
      str2[lenght2-i-1]=ch;
    }
    printf("\n");
    printf("reverse string 2:");
     printf("%s",str2);
     printf("\n");
     //return reverse 
     for(i=0;i<lenght1/2;i++){
      ch=str1[i];
      str1[i]=str1[lenght1-i-1];
      str1[lenght1-i-1]=ch;
    }
    for(i=0;i<lenght2/2;i++){
      ch=str2[i];
      str2[i]=str2[lenght2-i-1];
      str2[lenght2-i-1]=ch;
    }
    // strcat function
     printf("strcat string:");
     for(i=0;str1[i]!='\0';i++){

    }
    str1[i]=' ';
    i++;
    for(j=0;str2[j]!='\0';j++){
        str1[i]=str2[j];
        i++;
    }
    str1[i]='\0';
    printf("string is =%s",str1);
    printf("\n");
    // str copy
    printf("\nstring copy \n");
    for(i=0;str2[i]!='\0';i++){
        str1[i]=str2[i];
    }
    str1[i]='\0';
    printf("string=%s",str1);
    printf("\n");
    // str cmp
int len1=0,len2=0,flag,flag2;
    /*Finding a length of 2 string */
    for(len1=0;str1[len1]!='\0';len1++);
    for(len2=0;str2[len2]!='\0';len2++);
    int max=(len1>len2)?len1:len2;
    for(i=0;i<max;i++){
        if(str1[i]!=str2[i]){
            flag=1;
            if(str1[i]>str2[i]){
                flag2=1;
            }
            break;
        }
    }
    if(flag==1){
        printf("Both strings are not equal.\n");
        if(flag2==1){
            printf("String 1 is bigger.");
        }
        else{
            printf("String 2 is bigger.");
        }
    }
    else{
        printf("Both strings are equal.");
    }

}