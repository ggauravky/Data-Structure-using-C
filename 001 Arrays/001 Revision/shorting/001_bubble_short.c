#include <stdio.h>

int main() {
    int arr[] = {5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++) {
        
        // Flag to check if any swap happened
        int swapped = 0;

        // Inner loop: compare adjacent elements
        for (int j = 0; j < n - 1 - i; j++) {

            // If current element is bigger than next → swap them
            if (arr[j] > arr[j + 1]) {

                // Swap using a temp variable
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1;  // A swap happened
            }
        }

        if (swapped == 0) {
            break;
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
