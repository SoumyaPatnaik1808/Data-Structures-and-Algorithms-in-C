#include <stdio.h> 

int main() {
    int m,n,sum=0; 
    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);
    sum = m + n;
    printf("Sum of %d and %d is %d\n", m, n, sum);
    return 0;
}