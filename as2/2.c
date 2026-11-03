#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, d, r1, r2;
    printf("Enter a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d >= 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("Root1 = %lf\n", r1);
        printf("Root2 = %lf\n", r2);
    } else {
        printf("Discriminant negative, no real roots\n");
    }
    return 0;
}
