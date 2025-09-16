#include <stdio.h>

// Function for binary search
int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // avoid overflow

        if (arr[mid] == target)
            return mid; // element found
        else if (arr[mid] < target)
            left = mid + 1; // search right half
        else
            right = mid - 1; // search left half
    }
    return -1; // element not found
}

int main() {
    int arr[] = {2, 4, 7, 10, 15, 20, 25, 30};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Enter number to search: ");
    scanf("%d", &target);

    int result = binarySearch(arr, size, target);

    if (result != -1)
        printf("Element %d found at index %d.\n", target, result);
    else
        printf("Element %d not found in the array.\n", target);

    return 0;
}
