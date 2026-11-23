#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest (per annum): ");
    scanf("%f", &rate);
    printf("Enter time (in years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100.0;

    printf("Simple Interest: %.2f\n", simpleInterest);
    printf("Total Amount: %.2f\n", principal + simpleInterest);
}
