#include <stdio.h>

int main(void) {
    int x[6] = {-3, -4, -2, 5, 1, -2};

    printf("The Array is: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

    int sum;
    // Fix: Inner loop condition checks 'j <= 4'
    for (int i = 0; i <= 4; i++) {
        sum = 0;
        for (int j = i+1; j <= 5; j++) {
            sum += x[j];
        }

        if (sum < 0) {
            x[i] = -sum;
        } else {
            x[i] = sum;
        }
    }
    x[5] = 0;

    printf("The Final Array is: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");

    return 0;
}