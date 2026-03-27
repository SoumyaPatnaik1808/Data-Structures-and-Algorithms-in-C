# Single Number (LeetCode #136)

## Problem Statement
Given a **non-empty** array of integers `nums`, every element appears twice except for one. Your task is to find that single unique element.

### Constraints:
- The solution must have a **linear time complexity** $O(n)$.
- The solution must use only **constant extra space** $O(1)$.

---

## Core Logic: Bitwise XOR (`^`)
The most efficient way to solve this problem is by using the properties of the **XOR** operator. 

### XOR Properties:
1.  **Identity:** $x \oplus 0 = x$  
    *Any number XORed with zero remains unchanged.*
2.  **Self-Inverse:** $x \oplus x = 0$  
    *Any number XORed with itself results in zero.*
3.  **Commutative and Associative:** The order of numbers doesn't matter ($a \oplus b \oplus a = a \oplus a \oplus b$).

### How it works in this code:
If we XOR every number in the array together:
`[2, 1, 2, 4, 1]` becomes `2 ^ 1 ^ 2 ^ 4 ^ 1`.
Due to the properties above, the pairs cancel out:
`(2 ^ 2) ^ (1 ^ 1) ^ 4`  
`= 0 ^ 0 ^ 4`  
`= 4`

The final result is the unique number.

---

## Complexity Analysis

- **Time Complexity:** $O(n)$  
  We traverse the `nums` vector exactly once.
- **Space Complexity:** $O(1)$  
  We only use one integer variable (`result`) to store the running XOR total, regardless of the input size.

---
