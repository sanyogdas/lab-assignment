#include <stdio.h>

int main() {
    int readings = 24 / 4;
    float temp, maxTemp;

    printf("Enter 6 room temperature readings (every 4 hours):\n");

    for (int i = 1; i <= readings; i++) {
        printf("Reading %d: ", i);
        scanf("%f", &temp);

        if (i == 1 || temp > maxTemp) {
            maxTemp = temp;
        }
    }

    printf("\nHighest temperature recorded in the day: %.2f\n", maxTemp);
}
