#include <stdio.h>
#include <string.h>
void removing(char*ptr1,char*ptr2);
int main() {
    char str1[1000],str2[1000];
    printf("Enter string:");
    gets(str1);
    printf("original string :");
    puts(str1);
    removing(str1,str2);
    printf("modify string :");
    puts(str2);
}
void removing(char*ptr1,char*ptr2){
    int i,j=0;
     
    for(i=0;*(ptr1+i)!='\0';i++){
        if(*(ptr1+i)>=32&&*(ptr1+i)<=47||*(ptr1+i)>=58&&*(ptr1+i)<=64||*(ptr1+i)>=91&&*(ptr1+i)<=96||*(ptr1+i)>=123&&*(ptr1+i)<=126){ 
        }
        else{
         *(ptr2+j)=*(ptr1+i);
         j++;
        }
    }
    *(ptr2+j)='\0';
    
}


