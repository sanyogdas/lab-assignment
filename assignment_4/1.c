#include <stdio.h>

// Function declarations
void factorial();
void checkPrime();
void power();
void armstrong();
void findRange();
void multiplicationTable();
void findHCF();
void findGCD();
void fibonacci();

int main() {
    int choice;

    do {
        printf("\n=== LOOP PROGRAMS MENU ===\n");
        printf("1. Factorial of a number\n");
        printf("2. Check if a number is prime\n");
        printf("3. X raised to power n\n");
        printf("4. Armstrong numbers (1 to 500)\n");
        printf("5. Range of entered numbers (Smallest & Largest)\n");
        printf("6. Multiplication table\n");
        printf("7. HCF of two numbers\n");
        printf("8. GCD of two numbers\n");
        printf("9. Generate Fibonacci series\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                factorial();
                break;
            case 2:
                checkPrime();
                break;
            case 3:
                power();
                break;
            case 4:
                armstrong();
                break;
            case 5:
                findRange();
                break;
            case 6:
                multiplicationTable();
                break;
            case 7:
                findHCF();
                break;
            case 8:
                findGCD();
                break;
            case 9:
                fibonacci();
                break;
            case 0:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice! Please select a number between 0 and 9.\n");
        }
    } while (choice != 0);
}

// 1. Factorial using for loop
void factorial() {
    int n;
    unsigned long long fact = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("Factorial of %d = %llu\n", n, fact);
}

// 2. Prime check using for loop
void checkPrime() {
    int n, isPrime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
}

// 3. X raised to power n using while loop
void power() {
    double base, result = 1.0;
    int exp, i = 1;

    printf("Enter base (X) and positive exponent (n): ");
    scanf("%lf %d", &base, &exp);

    while (i <= exp) {
        result *= base;
        i++;
    }
    printf("%.2lf ^ %d = %.2lf\n", base, exp, result);
}

// 4. Armstrong numbers between 1 and 500
void armstrong() {
    int num, temp, digit, sum;

    printf("Armstrong numbers between 1 and 500: ");
    for (num = 1; num <= 500; num++) {
        temp = num;
        sum = 0;

        while (temp > 0) {
            digit = temp % 10;
            sum += (digit * digit * digit);
            temp /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }
    printf("\n");
}

// 5. Range of entered numbers using do-while loop
void findRange() {
    int num, min, max, first = 1;
    char cont;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (first) {
            min = max = num;
            first = 0;
        } else {
            if (num < min) min = num;
            if (num > max) max = num;
        }

        printf("Enter another number? (y/n): ");
        scanf(" %c", &cont);
    } while (cont == 'y' || cont == 'Y');

    printf("Smallest: %d | Largest: %d | Range: %d\n", min, max, max - min);
}

// 6. Multiplication table using for loop
void multiplicationTable() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

// 7. HCF using repeated subtraction (while loop)
void findHCF() {
    int a, b;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;
    while (x != y) {
        if (x > y)
            x -= y;
        else
            y -= x;
    }
    printf("HCF of %d and %d = %d\n", a, b, x);
}

// 8. GCD using Euclidean modulo method (while loop)
void findGCD() {
    int a, b, temp;

    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }
    printf("GCD of %d and %d = %d\n", a, b, x);
}

// 9. Fibonacci series using for loop
void fibonacci() {
    int n, t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}
