# C Program: Function Example – Hello World

## 📌 Overview

This program demonstrates:

- How to define a function in C  
- How to call a function  
- How to return a value from a function  
- How to store and print the returned value  

---

## 📂 Source Code

```c
#include <stdio.h>

int printHelloWorld() {     // Function definition
    printf("Hello World");
    return 1;
}

int main() {

    printHelloWorld();      // Function call

    int val = printHelloWorld(); 
    printf("%d", val);

    return 0;
}