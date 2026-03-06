#include <stdio.h>
#include <conio.h>
int Linear(int arr[], int size, int target);

int main(){
    int arr[] = {2,4,6,8,10}; 
    int size, target; 
    size = sizeof(arr)/sizeof(arr[0]);
    printf("Enter the target element: ");
    scanf("%d", &target);
    clrscr();
    int result = Linear(arr, size, target);
    if(result != -1){
        printf("Element found at index: %d\n", result);
    } else {
        printf("Element not found in the array.\n");
    }
    return 0;
}

int Linear(int arr[], int size, int target){
     for(int i=0; i< size; i++){
        if (arr[i] == target)
        {
            return i;
        } 
      }
      return -1;

}