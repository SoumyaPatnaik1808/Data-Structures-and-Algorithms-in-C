#include <stdio.h>

int sum(int,int);

int main(){
   
    int a,b,c; 
    printf("Enter two numbers:"); 
    scanf("%d %d", &a, &b);
    c = sum(a,b); 
    printf("The sum of %d and %d is %d", a, b, c);
    return 0;

}

int sum(int x, int y){
    return x+y;
}