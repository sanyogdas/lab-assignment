#include <stdio.h>
#include <math.h>

int main() {
    double x = 30, y = 2, z = 100;
    printf("sin(%.2lf) = %lf\n", x, sin(x));
    printf("cos(%.2lf) = %lf\n", x, cos(x));
    printf("log(%.2lf) = %lf\n", z, log(z));
    printf("pow(%.2lf,%.2lf) = %lf\n", x, y, pow(x, y));
    printf("sqrt(%.2lf) = %lf\n", z, sqrt(z));
    return 0;
}
