#include <stdio.h> 

int main(){
    int n =4; 
    for(int i=1; i<n; i++){
         for(int j=i+1; j>0; j--){
            printf("%d",j);
         }
         printf("\n");
         

    }
    return 0;

}