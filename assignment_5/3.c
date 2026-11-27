#include <stdio.h>

int main() {
    int arr[100], n, val, del = -1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to delete: ");
    scanf("%d", &val);

    if (del == -1){
        printf("No element found");
    } else {
        for (int i = 0; i < n; i++) {
            if (arr[i] == val){
            del = i;
            }
        }

        for (int i = del; i < n; i++) {
            arr[i] = arr [i + 1];
        }
    }
}