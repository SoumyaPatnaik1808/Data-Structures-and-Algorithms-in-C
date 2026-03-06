#include <stdio.h>

int main(){
    int smallest = __INT_MAX__; // initialize smallest to the maximum integer value
    int largest = 0;
    int arr[5]; 
    printf("Enter the 5 numbers: "); 
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]); // input
    }
    for(int i=0; i<5; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    printf("The smallest element in the array is: %d\n", smallest);
    
    for(int i=0; i<5; i++){
        if(largest < arr[i]){
            largest = arr[i]; 
        }
        
    }
    printf("The largest element is: %d\n", largest);
    return 0;

}