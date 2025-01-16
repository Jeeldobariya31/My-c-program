#include <stdio.h>

int main() {
    float num1 = 10.5;  
    float num2 = 20.0;
    float num3 = 30.75;
    float average;

   
    average = (num1 + num2 + num3) / 3;

   
    printf("The average of %.2f, %.2f, and %.2f is %.2f\n", num1, num2, num3, average);
}
