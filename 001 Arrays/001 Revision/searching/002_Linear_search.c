#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6,7,};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key=70;
    for(int i=0 ;i<n;i++){
        if (arr[i]==key)
        {
            printf("found the number , at index ,%d",arr[i]);
            break;
        }
        else{
            printf("not found\n");
            break;
        }
        
    }
    return 0;

}