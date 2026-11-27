#include <stdio.h>

int main() {
    int n = 20;
    n += 5;
    printf("After += : %d\n", n);
    n -= 5;
    printf("After -= : %d\n", n);
    n *= 3;
    printf("After *= : %d\n", n);
    n /= 3;
    printf("After /= : %d\n", n);
    n %= 7;
    printf("After %%= : %d\n", n);
    return 0;
}
