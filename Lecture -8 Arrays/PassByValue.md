# Pass By Value in C

## 📌 Overview

**Pass by value** means that when you pass a variable to a function,  
the function receives a **copy** of that variable — not the original one.

This is the default behavior in C.

That means:
- Changes made inside the function **do not affect** the original variable.

---

## 🧠 How It Works

When a function is called:

1. The value of the argument is copied.
2. The copy is stored in the function’s parameter.
3. The function works with that copy.
4. When the function ends, the copy is destroyed.

The original variable remains unchanged.

---

## 📂 Example Program

```c
#include <stdio.h>

void modify(int x){
    x = 100;
    printf("Inside function: %d\n", x);
}

int main(){
    int a = 10;
    modify(a);
    printf("Outside function: %d\n", a);
    return 0;
}