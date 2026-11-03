/*Using if-else decision making, write a program to read number of computers that
need services from the user and calculate the service charge as per the
information shown below.*/

#include <stdio.h>

int main() {
    int numComputers;
    float serviceCharge;

    printf("Enter the number of computers that need service: ");
    scanf("%d", &numComputers);

    if (numComputers <= 0) {
        printf("Invalid input! Number of computers must be greater than zero.\n");
        return 1;
    }

    if (numComputers == 1) {
        serviceCharge = 50.0;
    } else if (numComputers == 2) {
        serviceCharge = 90.0;
    } else if (numComputers == 3) {
        serviceCharge = 120.0;
    } else {
        serviceCharge = 120.0 + (numComputers - 3) * 30.0;
    }

    printf("The total service charge for %d computer(s) is: $%.2f\n", numComputers, serviceCharge);

    return 0;
}