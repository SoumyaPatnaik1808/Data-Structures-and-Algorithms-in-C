#include <stdio.h> 
int main() {
    int a , b , sum ,  diff , prod , div; 
    printf("Enter two Numbers:"); 
    scanf("%d%d", &a,&b); 
    sum = a+b; 
    diff = a-b; 
    prod = a*b; 
    div = a/b; 
    printf("Sum: %d\n", sum); 
    printf("Difference: %d\n", diff);   
    printf("Product: %d\n", prod); 
    printf("Division: %d\n", div); 
    return 0; 

}