#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter numbers (enter -999 to stop):\n");

    while (1) {
        scanf("%d", &num);

        if (num == -999) {
            break;
        }

        sum += num;
    }

    printf("Sum of all numbers entered: %d\n", sum);
}
