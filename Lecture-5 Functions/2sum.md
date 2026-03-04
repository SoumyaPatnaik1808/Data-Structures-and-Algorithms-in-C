# C Program: Sum of Two Numbers Using Functions

## 📌 Overview

This C program demonstrates:

- Function declaration (prototype)
- Taking user input using `scanf()`
- Passing arguments to a function
- Returning a value from a function
- Printing formatted output using `printf()`

The program calculates the sum of two numbers entered by the user.

---

## 📂 Source Code

```c
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