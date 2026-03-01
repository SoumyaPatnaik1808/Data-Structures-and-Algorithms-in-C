#include <stdio.h>; 

int printHelloWorld(){     // Function definition
    printf("Hello World");
    return 1;
}

int main(){

    printHelloWorld(); // Function call/invoke

    int val = printHelloWorld(); 
    printf("%d", val);

    return 0;
}