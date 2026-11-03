#include <stdio.h>

int main() {
    printf("Enter three numbers: ");
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    (a==b || b==c || a==c) ? 
    printf("The numbers are not distinct.\n") : 
    printf("The numbers are distinct.\n");
}