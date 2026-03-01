# Logic Analysis: Continuous Number Grid

This program demonstrates a **nested loop** where a variable is updated independently of the loop counters. Unlike the previous examples, the number being printed does **not** reset when a new row begins.

---

## 1. Program Structure
* **Global Counter (`int num = 1`)**: Declared outside the loops. This means its value persists and keeps increasing throughout the entire program execution.
* **Outer Loop (`i`)**: Runs from 1 to 3. It creates **3 rows**.
* **Inner Loop (`j`)**: Runs from 1 to 3. It prints **3 columns** per row.
* **Continuous Increment (`num++`)**: The number increases by 1 every time a character is printed, regardless of which row it is in.

[Image of nested loop dry run table with continuous increment variable]

---

## 2. Step-by-Step Dry Run

| Row ($i$) | Col ($j$) | Value of `num` | Action | Output |
| :--- | :--- | :--- | :--- | :--- |
| **1** | 1 | 1 | Print `num`, then `num++` | `1` |
| | 2 | 2 | Print `num`, then `num++` | `2` |
| | 3 | 3 | Print `num`, then `num++` | `3` |
| | | | **End of Inner Loop → New Line** | |
| **2** | 1 | 4 | Print `num`, then `num++` | `4` |
| | 2 | 5 | Print `num`, then `num++` | `5` |
| | 3 | 6 | Print `num`, then `num++` | `6` |
| | | | **End of Inner Loop → New Line** | |
| **3** | 1 | 7 | Print `num`, then `num++` | `7` |
| | 2 | 8 | Print `num`, then `num++` | `8` |
| | 3 | 9 | Print `num`, then `num++` | `9` |
| | | | **End of Inner Loop → New Line** | |

---

## 3. Key Logical Distinction
The position of `int num = 1;` is the most important part of this code:
* **Inside the Outer Loop:** If `num` was declared inside `i`, every row would start with `1 2 3`.
* **Outside the Outer Loop (Current):** Because