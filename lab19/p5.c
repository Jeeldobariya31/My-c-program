#include<stdio.h>
#include<string.h>
int main() {
    char str[1000] ;
    printf("Enter the string");
    gets(str);
    char target;
    printf("enter targate element :");
    scanf("%c",&target);
    char replacement;
    printf("enter  replacement element :");
    scanf("%c",&replacement);

    printf("Original string: %s\n", str);
    for (int i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == target)
       {
            str[i] = replacement;
        }
    }

    printf("Modified string: %s\n", str);
}