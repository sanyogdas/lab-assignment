#include <stdio.h>

int main() {
    printf("Intput a number: ");
    int num;
    scanf("%d", &num);
     (num > 0) ? printf("The number is positive.\n") : 
     (num < 0) ? printf("The number is negative.\n") : 
                 printf("The number is zero.\n");
}