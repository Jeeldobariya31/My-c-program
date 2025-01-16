#include<stdio.h>

void main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    int secondLargest;

    
    if ((a > b && a < c) || (a < b && a > c)) {
        secondLargest = a;
    } else if ((b > a && b < c) || (b < a && b > c)) {
        secondLargest = b;
    } else {
        secondLargest = c;
    }

    printf("The second largest number is: %d", secondLargest);
    
}

    