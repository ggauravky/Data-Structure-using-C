#include<stdio.h>

int main() {
    int arr[10] = {1,2,3,4,5,6,7}; 
    int n = 7;

    int pos = 2;
    int val = 333;

    // Shift elements right
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert value
    arr[pos] = val;
    n++;

    // Print
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
