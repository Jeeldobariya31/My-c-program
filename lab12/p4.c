#include <stdio.h>
void main() {
    int i, j, n=5;
    for(i = 1; i <= n; i++) {
        for(j = n; j >=n-i+1; j--) {
            printf("%d",i);
        }
        printf("\n");
    }
}
