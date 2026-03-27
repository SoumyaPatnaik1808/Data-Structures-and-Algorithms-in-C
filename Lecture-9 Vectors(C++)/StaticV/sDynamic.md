# Static vs Dynamic Memory Allocation in C

## 📌 Overview

Memory management is a fundamental concept in C programming.  
It determines **how memory is allocated, used, and freed** during program execution.

There are two main types of memory allocation:

1. **Static Memory Allocation**
2. **Dynamic Memory Allocation**

This README explains both concepts in detail along with their differences, advantages, and use cases.

---

# 🧠 What is Memory Allocation?

Memory allocation is the process of reserving space in memory for storing data.

In C, memory is divided into different sections:

- Stack (for static allocation)
- Heap (for dynamic allocation)

---

# 🔹 Static Memory Allocation

## 📌 Definition

Static memory allocation is when memory is allocated **at compile time**.

The size of variables must be known before the program runs.

---

## 📂 Example

```c
#include <stdio.h>

int main() {
    int a = 10;      // static allocation
    int arr[5];      // fixed-size array

    printf("%d\n", a);
    return 0;
}

 
 ## ⚙️Characteristics 
 
*   Memory is allocated **before execution**      
*   Stored in **stack memory**      
*   Size is **fixed**      
*   Cannot be resized during runtime      
*   Automatically managed by the compiler       

✅ # Advantages
*   Fast allocation and deallocation      
*   Simple to use      
*   No memory leaks       
❌ # Disadvantages  
*   Wastage of memory if size is overestimated      
*   Cannot grow or shrink      
*   Less flexible    

   
   ##🔹 Dynamic Memory Allocation 
   📌 Definition -------------  
   Dynamic memory allocation is when memory is allocated **during runtime** using functions.  Memory is allocated from the **heap**.   

   ## Example 
   #include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;

    ptr = (int*) malloc(5 * sizeof(int)); // allocate memory for 5 integers

    if(ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for(int i = 0; i < 5; i++) {
        ptr[i] = i + 1;
    }

    for(int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr); // free memory

    return 0;
}