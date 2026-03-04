# C Program: Sum of Digits of a Number

## 📌 Overview

This C program calculates the **sum of the digits** of a given integer.

It demonstrates:

- Function declaration (prototype)
- User input using `scanf()`
- Passing arguments to a function
- Using a `while` loop
- Using modulus (`%`) and division (`/`) operators
- Returning computed values

---

## 📂 Source Code

```c
#include <stdio.h>

int digitsum(int);

int main(){
  printf("Enter a number:");
  int n;    
  scanf("%d", &n);
  printf("The sum of the digits of %d is %d", n, digitsum(n));
  return 0;
}

int digitsum(int x){
    int s = 0; 
    int remainder;
    while(x > 0){
        remainder = x % 10; 
        s = s + remainder;
        x = x / 10;
    }
    return s;
}