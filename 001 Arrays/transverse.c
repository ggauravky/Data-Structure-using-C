#include <stdio.h>

int main() {
    int n, i;
    int arr[100];  // array of max size 100

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // input each element
    }

    printf("\nTraversing the array:\n");
    for (i = 0; i < n; i++) {
        printf("Element at index %d = %d\n", i, arr[i]);
    }

    return 0;
}
