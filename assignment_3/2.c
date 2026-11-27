/*To find the greatest of 3 integers using two methods (a) if-else and (b) ternary
operator.*/

#include <stdio.h>

int main() {
    int a,b,c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("The greatest number using if-else is: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("The greatest number using if-else is: %d\n", b);
    } else {
        printf("The greatest number using if-else is: %d\n", c);
    }

    int greatest = (a >= b) ? ((a >= c) ? a : c) : ((b >= c) ? b : c);
    printf("The greatest number using ternary operator is: %d\n", greatest);

    return 0;
}