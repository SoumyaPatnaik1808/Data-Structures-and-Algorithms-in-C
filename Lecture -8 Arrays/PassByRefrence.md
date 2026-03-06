# Pass By Reference in C (Using Pointers)

## 📌 Overview

In C, arguments are passed **by value by default**.  
However, we can achieve **pass by reference behavior** using **pointers**.

Pass by reference means:

- Instead of passing a copy of a variable,
- We pass its **memory address**.
- The function can directly modify the original variable.

This allows changes made inside the function to reflect outside it.

---

## 🧠 Why Pass By Reference?

Use pass by reference when:

- You want a function to modify the original variable
- You want to return multiple values from a function
- You want to avoid copying large data structures (like arrays)

---

## 📂 Example Program

```c
#include <stdio.h>

void modify(int *x){
    *x = 100;
    printf("Inside function: %d\n", *x);
}

int main(){
    int a = 10;
    modify(&a);
    printf("Outside function: %d\n", a);
    return 0;
}