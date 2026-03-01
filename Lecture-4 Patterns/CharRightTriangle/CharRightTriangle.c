#include <stdio.h> 

int main(){
  
    int i,j; 
    for(i=0; i<=4;i++){
        char ch = 'A'; 
        for(j=0; j<i+1; j++){
            printf("%c", i+1+64); 
            ch++; 
        }
        printf("\n");
    }


}