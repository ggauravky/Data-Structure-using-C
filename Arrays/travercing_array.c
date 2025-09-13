#include <stdio.h>

int main() {
    int n;
    int arr[100];
    
    printf("enter the number of elemnts: ");
    scanf("%d" , &n);
    printf("the number of elemnst are : %d\n" , n);
    printf("enter elements one by one - \n");
    for (int i = 0; i < n; i++){
       printf("enter elemnt at index :%d\n",i);
       scanf("%d",&arr[i]);
    }

    printf("array you have entered\n");
    for (int i = 0; i < n; i++){
       printf("elemnt at index :%d is : %d\n",i ,arr[i]);
    }
    
    return 0;
}