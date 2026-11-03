/*To check whether a number is: (a) even or odd (b) negative or positive by using (i)
if-else (ii) ternary operator.*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("The number is %s using ternary operator.\n", (num % 2 == 0) ? "even" : "odd");
    printf("The number is %s using ternary operator.\n", (num >= 0) ? "positive" : "negative");

    return 0;
}