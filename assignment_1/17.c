#include <stdio.h>
#include <math.h>

int main() {
    double height = 17.0;
    double diagonal = 25.0;
    double baseDistance;

    if (diagonal <= height) {
        printf("Invalid dimensions: Diagonal distance must be greater than height.\n");
    } else {
        baseDistance = sqrt((diagonal * diagonal) - (height * height));
        printf("Distance from base of Red Fort to point C: %.2lf meters\n", baseDistance);
    }
}
