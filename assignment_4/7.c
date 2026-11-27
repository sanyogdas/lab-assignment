#include <stdio.h>

int main() {
    int n, count = 1;
    int t1 = 0, t2 = 1, nextTerm;

    printf("Enter the number of terms (N): ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci sequence up to %d numbers: ", n);
        while (count <= n) {
            printf("%d", t1);
            if (count < n) {
                printf(", ");
            }
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
            count++;
        }
        printf("\n");
    }
}
