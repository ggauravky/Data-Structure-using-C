#include <stdio.h>

int main()
{
    int pos;
    int found = 0;
    int arr[70] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("enter the num you want to search :  ");
    scanf("%d", &pos);
    for (int i = 0; i < 70; i++)
    {
        if (pos == arr[i])
        {
            printf("the number is found at index :%d", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Number not found in the array.\n");
    }
    return 0;
}