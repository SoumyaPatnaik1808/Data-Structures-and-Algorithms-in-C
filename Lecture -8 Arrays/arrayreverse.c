#include <stdio.h> 

void reverse(int arr[], int n); 

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]); 
    printf("The reversed array is: \n");
    reverse(arr, n);
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;

    

}

void reverse(int arr[], int n){
    int start = 0; 
    int end = n-1; 

    if(n%2==0){   // at even length, we need not swap the middle element, as there is no middle element.
        while(start<end){
            int temp = arr[start]; // swapping the elements
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
    }
     }
    else {
        while(start<=end){  // at odd length, we need to swap the middle element as well, as there is a middle element. and middle element = middle element upon swapping
            int temp = arr[start]; 
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
   

    
}