#include <stdio.h>

int main() {
    int num;

    printf("Enter integers (enter a number greater than 100 to quit):\n");

    do {
        scanf("%d", &num);
    } while (num <= 100);

    printf("QUIT! (%d is greater than 100)\n", num);
}
