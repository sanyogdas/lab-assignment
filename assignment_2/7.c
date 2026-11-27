#include <stdio.h>

int a = 10, b = 20;

int main() {
    int max = (a > b) ? a : b;
    printf("The maximum value is: %d\n", max);
    return 0;
}