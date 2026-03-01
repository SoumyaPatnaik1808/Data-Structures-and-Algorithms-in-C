# Logic Explanation: Reverse Number Triangle Pattern in C

## 1. Objective

The objective of this program is to print a **reverse number triangle pattern** using nested `for` loops in the C programming language.

The given code generates a pattern where:
- Each row contains numbers in decreasing order
- The number of elements increases with each row
- A new line is printed after every row

---

## 2. Given Code

```c
#include <stdio.h>

int main() {
    int n = 4;
    for(int i = 1; i < n; i++) {
        for(int j = i + 1; j > 0; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
