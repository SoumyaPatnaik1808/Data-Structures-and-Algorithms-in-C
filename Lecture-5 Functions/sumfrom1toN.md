# C Program: Sum of First N Natural Numbers

## 📌 Overview

This C program calculates the sum of the first **N natural numbers** using a function and a `for` loop.

It demonstrates:

- Function declaration (prototype)
- User input using `scanf()`
- Passing arguments to a function
- Using loops (`for`)
- Returning computed values

---

## 📂 Source Code

```c
#include <stdio.h>

int sum(int); 

int main(){
    int a,b; 
    printf("Enter a number: ");
    scanf("%d", &a);
    b = sum(a);
    printf("The sum is %d", b);
    return 0;
}

int sum(int x){
    int s = 0; 
    for(int i=1; i<=x; i++){
        s = s + i;
    }
    return s;  
}