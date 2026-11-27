#include <stdio.h>

int main() {
    printf("Enter a year: ");
    int year;
    scanf("%d", &year);
    (year % 4 == 0) ? printf("The year is a leap year.\n") : 
    printf("The year is not a leap year.\n");
}