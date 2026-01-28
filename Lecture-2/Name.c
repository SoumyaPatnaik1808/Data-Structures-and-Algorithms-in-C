#include <stdio.h> 

int main(){
    char name[50]; 
    printf("Enter your name: "); 
    scanf("%49s", name);
    printf("Hello, %s!\n", name); // Print a greeting message
    return 0;
}