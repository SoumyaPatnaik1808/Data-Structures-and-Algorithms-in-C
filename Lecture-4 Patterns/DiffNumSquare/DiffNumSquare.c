#include <stdio.h> 

int main() {

    int i, j; 
    int num = 1; 
    for (i=1; i<=3; i++){
        for(j=1; j <=3; j++){
            printf("%d", num); 
            num++;
        }
        printf("\n"); 
    }
}