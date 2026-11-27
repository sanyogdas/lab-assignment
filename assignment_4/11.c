#include <stdio.h>

int main() {
    int secretNumber = 49;
    int guess;

    printf("=== Number Guessing Game ===\n");

    do {
        printf("Guess the secret number: ");
        scanf("%d", &guess);

        if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        } else if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the right number (%d)!\n", secretNumber);
        }
    } while (guess != secretNumber);
}
