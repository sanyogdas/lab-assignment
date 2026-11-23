#include <stdio.h>

int main() {
    float principal = 150000.0;
    float rate = 8.0;
    float time = 2.0;
    float simpleInterest, totalAmount;

    simpleInterest = (principal * rate * time) / 100.0;
    totalAmount = principal + simpleInterest;

    printf("Loan Principal: Rs. %.2f\n", principal);
    printf("Total Interest (8%% for 2 years): Rs. %.2f\n", simpleInterest);
    printf("Total Amount to be Repaid: Rs. %.2f\n", totalAmount);
}
