#include <stdio.h>

int main() {
    double balance = 10000.0;
    double rate = 0.05;
    double target = 15000.0;
    int years = 0;

    while (balance <= target) {
        years++;
        balance += balance * rate;
        printf("Year %d: Rs. %.2lf\n", years, balance);
    }

    printf("\nIt takes %d years for the balance to exceed Rs. %.2lf.\n", years, target);
}
