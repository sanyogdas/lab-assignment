#include <stdio.h>

int main(){
    printf("Input two numbers: ");
    int a, b;
    scanf("%d %d", &a, &b);
    int sum = a + b;
    printf("The mean is: %f\n", (double)sum / 2);
}