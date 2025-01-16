#include<stdio.h>
#include<string.h>

void main(){
    int i=0,j,final,count1=0,count2=0;
    char str1[1000],str2[1000];
    printf("enter first string:");
    gets(str1);
    printf("enter second string:");
    gets(str2);
    // strlen
    for(i=0;str1[i]!='\0';i++)
    {
        count1++;
    }
    printf("len1=%d\n",count1);
    for(i=0;str2[i]!='\0';i++)
    {
        count2++;
    }
    printf("len2=%d\n",count2);
    // strcpy
    for(i=0;str2[i]!='\0';i++){
        str1[i]=str2[i];
    }
    str1[i]='\0';
    printf(" copyed string=%s\n",str1);
    // strcmp
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
    
        