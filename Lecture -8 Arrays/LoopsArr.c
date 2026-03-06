#include <stdio.h>

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr);  // size of the array in bytes
    int n = size / sizeof(arr[0]); // number of elements in the array

    // using for loop to access the elements of the array
    for(int i=0; i<=n-1; i++){
        printf("The element at index %d is: %d\n", i, arr[i]);
    }

    //Input from user and store in array
    int arr2[5];
    printf("Enter 5 integers:\n");
    for(int i=0; i<=n-1; i++){
        scanf("%d", &arr2[i]); //input
    }
    printf("The elements of the second array are:\n");
    for(int i=0; i<=n-1; i++){
        printf("%d ", arr2[i]); //accessing the elements of the second array
    }
    printf("\n");

    return 0;
}   