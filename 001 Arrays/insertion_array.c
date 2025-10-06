#include <stdio.h>

int main() {
    int n, i , p , x;
    int arr[100];  // array of max size 100

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter number of index to insert: ");
    scanf("%d", &p);

    printf("Enter element to insert: ");
    scanf("%d", &x);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // input each element
    }

    for (int i = n-1; i > p-1; i--){
        arr[i+1]= arr[i];
    }
    arr[p-1]=x;
    n++;

    printf("\nprint new array\n");
    for (i = 0; i < n; i++) {
        printf("Element at index %d = %d\n", i, arr[i]);
    }
    

    return 0;
}
