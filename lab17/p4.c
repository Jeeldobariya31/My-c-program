#include <stdio.h>
void main() {
    int num1, num2, temp;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2); 
    int *pnum1,*pnum2,*ptemp; 
    pnum1=&num1;
    pnum2=&num2;
    ptemp=&temp;
    *ptemp = *pnum1;
    *pnum1 =*pnum2;
    *pnum2 = *ptemp;
    printf("After swapping:\n");
    printf("First number: %d\n", *pnum1);
    printf("Second number: %d\n", *pnum2);
}

