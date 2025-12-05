#include<stdio.h>
#include<stdlib.h>

int main() {
    int *ptr, n, c;
    printf("enter a num: ");
    scanf("%d",&n);

    // allocated memory for n int
    ptr=(int*)malloc(n*sizeof(int)); 
    // here (int*) -> type cast the memory return by malloc

    if(ptr==NULL){
        printf("memory not allocated");
        return 0;
    }else{
        printf("there are some space there ,and valur of : %d\n",*ptr);
    }

    printf("Enter %d inetegr:\n",n);
    for(int i =0;i<n;i++){
        scanf("%d",&ptr[i]);
    }

    printf("you have entred: \n");
    for(int i=0;i<n;i++){
        printf("%d ",ptr[i]);
    }

    free(ptr);  // free the memory

    return 0;
}