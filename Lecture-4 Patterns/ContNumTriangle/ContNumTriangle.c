#include <stdio.h>

int main(){
    int i,j; 
    for(i=0; i<=4; i++){
       int num = 1; 
         for(j=0; j<i+1; j++){
              printf("%d", num); 
              num++; 
         }
         printf("\n");
    

    }
}