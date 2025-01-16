#include<stdio.h>
#include<time.h>

void main() {
    time_t now;
    time(&now);

    char *time_str = ctime(&now);

    printf("Current date and time: %s", time_str);
}
