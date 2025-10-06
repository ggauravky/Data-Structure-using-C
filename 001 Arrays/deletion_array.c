#include <stdio.h>

int main() {
    int n, i, pos;
    int arr[100];

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
    } else {
        // Shift elements to the left
        for (i = pos; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--; // reduce size

        printf("\nArray after deletion:\n");
        for (i = 0; i < n; i++) {
            printf("Element at index %d = %d\n", i, arr[i]);
        }
    }

    return 0;
}
