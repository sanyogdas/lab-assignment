#include <stdio.h>

int main() {
    float radius = 7.5;
    float costPerSqMeter = 55.0;
    const float PI = 3.14159;
    float area, totalCost;

    area = PI * radius * radius;
    totalCost = area * costPerSqMeter;

    printf("Area of the circular garden: %.2f sq. meters\n", area);
    printf("Total cost of grass turf: Rs. %.2f\n", totalCost);
}
