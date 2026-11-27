#include <stdio.h>

int main() {
    float weight, height, bmi;

    do {
        printf("Enter your weight (in kg): ");
        scanf("%f", &weight);

        if (weight <= 0) {
            printf("Invalid input! Weight must be a positive number.\n");
        }
    } while (weight <= 0);

    do {
        printf("Enter your height (in meters): ");
        scanf("%f", &height);

        if (height <= 0) {
            printf("Invalid input! Height must be a positive number.\n");
        }
    } while (height <= 0);

    bmi = weight / (height * height);
    printf("\nYour BMI is: %.2f\n", bmi);

    if (bmi > 25.0) {
        printf("Result: You are overweight (BMI > 25).\n");
    } else {
        printf("Result: You are not overweight (BMI <= 25).\n");
    }
}
