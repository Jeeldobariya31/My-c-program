#include <stdio.h>

int main() {
    int a = 10;
    float b = 20.5;
    char c = 'A';
    
    printf("Address of a: %p, Address of b: %p, Address of c: %p\n", (void*)&a, (void*)&b, (void*)&c);
}
