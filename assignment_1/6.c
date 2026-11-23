#include <stdio.h>

int main() {
    int numerator, denominator;

    printf("Enter numerator: ");
    scanf("%d", &numerator);
    printf("Enter denominator: ");
    scanf("%d", &denominator);

    if (denominator == 0) {
        printf("Invalid fraction: Denominator cannot be zero.\n");
    } else {
        printf("The fraction is: %d/%d\n", numerator, denominator);
    };
}
