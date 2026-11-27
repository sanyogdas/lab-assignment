#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5, avg, max, min, std_dev;
    
    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    avg = (num1 + num2 + num3 + num4 + num5) / 5;


    if (num1 >= num2 && num1 >= num3 && num1 >= num4 && num1 >= num5) {
        max = num1;
    } else if (num2 >= num1 && num2 >= num3 && num2 >= num4 && num2 >= num5) {
        max = num2;
    } else if (num3 >= num1 && num3 >= num2 && num3 >= num4 && num3 >= num5) {
        max = num3;
    } else if (num4 >= num1 && num4 >= num2 && num4 >= num3 && num4 >= num5) {
        max = num4;
    } else {
        max = num5;
    }

    if (num1 <= num2 && num1 <= num3 && num1 <= num4 && num1 <= num5) {
        min = num1;
    } else if (num2 <= num1 && num2 <= num3 && num2 <= num4 && num2 <= num5) {
        min = num2;
    } else if (num3 <= num1 && num3 <= num2 && num3 <= num4 && num3 <= num5) {
        min = num3;
    } else if (num4 <= num1 && num4 <= num2 && num4 <= num3 && num4 <= num5) {
        min = num4;
    } else {
        min = num5;
    }

    std_dev = ((num1 - avg) * (num1 - avg) + (num2 - avg) * (num2 - avg) + (num3 - avg) * (num3 - avg) + (num4 - avg) * (num4 - avg) + (num5 - avg) * (num5 - avg))/5;

    printf("Average: %d\n", avg);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Standard Deviation: %d\n", std_dev);
}