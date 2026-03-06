# C Program: Linear Search Algorithm

## 📌 Overview

This C program implements the **Linear Search Algorithm** to find a target element in an array.

Linear Search works by **checking each element of the array one by one** until the target element is found or the array ends.

If the element is found, the program returns its **index position**.  
If it is not found, the program returns **-1**.

---

# 📂 Source Code

```c
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
    } 
    else{
        printf("Element not found in the array.\n");
    }

    return 0;
}

int Linear(int arr[], int size, int target){
    for(int i = 0; i < size; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}