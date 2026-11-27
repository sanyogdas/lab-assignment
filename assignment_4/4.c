#include <stdio.h>

int main() {
    int num, evenCount = 0;

    printf("Enter 20 integers:\n");

    for (int i = 1; i <= 20; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            evenCount++;
        }
    }

    printf("Total even numbers entered: %d\n", evenCount);
}
