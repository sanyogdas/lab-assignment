#include <stdio.h>

int main() {
    float fuel, distance = 0;

    printf("Enter the initial amount of fuel (in litres): ");
    scanf("%f", &fuel);

    if (fuel <= 0) {
        printf("No fuel available to travel.\n");
        return 0;
    }

    while (fuel > 0) {
        if (fuel >= 2) {
            fuel -= 2;       // 10 kms requires 2 litres (1 litre = 5 kms)
            distance += 10;
            printf("Travelled 10 kms, fuel left: %.2f Litres\n", fuel);
        } else {
            // Handles any remaining fuel less than 2 litres (e.g., an odd number of litres)
            float remDist = fuel * 5;
            distance += remDist;
            fuel = 0;
            printf("Travelled %.2f kms, fuel left: 0.00 Litres\n", remDist);
        }
    }

    printf("\nTotal distance travelled: %.2f kms\n", distance);
}
