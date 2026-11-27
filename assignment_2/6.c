#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (1) {
        printf("What do you want to do?\n [1] Shift left\n [2] Shift right\n [3] Exit\n");
        int choice;
        scanf("%d", &choice);
        if (choice == 1) {
            num = num << 1; 
        printf("Result after left shift: %d\n", num);
        } else if (choice == 2) {
            num = num >> 1;
        printf("Result after right shift: %d\n", num);
        } else if (choice == 3) {
            break;
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    }   

}