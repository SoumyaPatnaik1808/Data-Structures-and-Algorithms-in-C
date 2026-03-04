#include <stdio.h> 

int factorial(int n){
    int fact = 1; 
    for(int i=1; i<=n; i++){
        fact *= i; 
    }
    return fact;

    }
int nCr(int n, int r){
    int factn = factorial(n); 
    int factr = factorial(r); 
    int factnr = factorial(n-r);

    return factn/(factr*factnr); 
}

int main(){
   int n=8; 
   int r=2; 
    printf("nCr of %d and %d is: %d", n, r, nCr(n,r)); 
     return 0;

}