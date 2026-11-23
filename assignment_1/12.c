#include <stdio.h>

int main() {
    float basic, da, ta, gross_salary;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    da = 0.10 * basic;
    ta = 0.12 * basic;
    gross_salary = basic + da + ta;

    printf("DA (10%%): %.2f\n", da);
    printf("TA (12%%): %.2f\n", ta);
    printf("Gross Salary: %.2f\n", gross_salary);
}
