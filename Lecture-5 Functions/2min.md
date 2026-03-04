# C Program: Finding the Minimum of Two Numbers

## 📌 Overview

This C program demonstrates:

- Function declaration (prototype)
- Taking user input inside a function
- Using conditional statements (`if-else`)
- Returning a value from a function
- Printing formatted output

The program determines the smaller (minimum) of two numbers entered by the user.

---

## 📂 Source Code

```c
#include <stdio.h>

int min(int, int);

int main(){
    int a,b,c; 
    c = min(a,b);
    printf("The minimum is %d", c);
    return 0; 
}

int min(int x, int y){
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    if(x<y){
        return x;
    }
    else{
        return y;
    }
}