#include <stdio.h>

int main() {
    int availableTickets, req;

    printf("Enter total tickets available (N): ");
    scanf("%d", &availableTickets);

    if (availableTickets <= 0) {
        printf("No tickets available for sale.\n");
        return 0;
    }

    while (availableTickets > 0) {
        printf("Enter tickets required (1 to 4): ");
        scanf("%d", &req);

        if (req < 1 || req > 4) {
            printf("Invalid request! Each person can only buy between 1 and 4 tickets.\n");
        } else if (req > availableTickets) {
            printf("Only %d ticket(s) left. Please enter a smaller number.\n", availableTickets);
        } else {
            availableTickets -= req;
            printf("Tickets available = %d\n", availableTickets);
        }
    }

    printf("\nAll tickets are sold out!\n");
}
