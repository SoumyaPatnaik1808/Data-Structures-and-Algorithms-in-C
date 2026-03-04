# Understanding Functions in Memory (C Programming)

## 📌 Overview

When a C program runs, it is loaded into memory in different sections.  
Understanding how **functions**, **stack**, and **heap** work in memory is essential for writing efficient and bug-free programs.

This README explains:

- Where functions are stored in memory
- What the stack is
- What the heap is
- How function calls use memory
- The difference between stack and heap

---

# 🧠 Memory Layout of a C Program

When a program runs, memory is typically divided into:

| Stack |
| Heap |
| Data Segment |

## Stack memory 

# What is Stack? 

The stack is a region of memory used for:

Function calls

Local variables

Function parameters

Return addresses

#  📌 Characteristics

Automatically managed

Follows LIFO (Last In, First Out)

Fast allocation and deallocation

Limited size

Cleared when function returns