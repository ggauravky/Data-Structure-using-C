#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6,7,};
    // int n = sizeof(arr); // this stores value in bytes ,  7 × 4 = 28 bytes 

    
    printf("enter a num");
    //scanf("%d",&arr[9]);  -> this cannot be done because c , did not support it , it can be done using , malloc ,calloc .

    scanf("%d",&arr[4]); //it can be done because , it assign that value to index 4

    int n = sizeof(arr) / sizeof(arr[0]); // this will do something like -> 28/4

    printf("%d\n",n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
}