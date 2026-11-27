#include <stdio.h>

int main() {
    int arr[100], n, target, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &target);

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            printf("Element %d found at index %d (position %d).\n", target, i, i + 1);
            found = 1;
            break;
        }
    }

    if (found != 0) {
        printf("Element %d not found in the array.\n", target);
    }
}