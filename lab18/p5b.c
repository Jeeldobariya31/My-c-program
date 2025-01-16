#include <stdio.h>

void swap(int *num1, int *num2);

void main() {
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    swap(&num1, &num2);
    printf("After swapping: \n");
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
}
void swap(int *num1, int *num2) {
    *num1 = *num1 + *num2; 
    *num2 = *num1 - *num2; 
    *num1 = *num1 - *num2; 
}
