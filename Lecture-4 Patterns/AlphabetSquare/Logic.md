# Logic Analysis: Character Pattern Printing

This program demonstrates how to use **nested loops** and **character incrementing** to print a repeated alphabetical sequence in a grid format.

---

## 1. Program Structure
* **Outer Loop (`i`)**: Runs from 1 to 4. It determines the number of **rows**.
* **Character Initialization (`char ch = 'A'`)**: Crucially, the character is reset to 'A' at the start of *every* new row.
* **Inner Loop (`j`)**: Runs from 1 to 4. It determines the number of **columns** per row.
* **Increment (`ch++`)**: After printing a character, it moves to the next letter in the ASCII sequence (A → B → C → D).

---

## 2. Step-by-Step Dry Run



| Row ($i$) | `ch` Reset | Inner Loop ($j=1 \dots 4$) | `ch` changes to... | Row Output |
| :--- | :--- | :--- | :--- | :--- |
| **1** | `'A'` | Prints `ch`, then `ch++` | A → B → C → D | `A B C D` |
| **2** | `'A'` | Prints `ch`, then `ch++` | A → B → C → D | `A B C D` |
| **3** | `'A'` | Prints `ch`, then `ch++` | A → B → C → D | `A B C D` |
| **4** | `'A'` | Prints `ch`, then `ch++` | A → B → C → D | `A B C D` |

### The "Reset" Logic
Because `char ch = 'A';` is written **inside** the outer loop but **before** the inner loop, the sequence restarts for every row. 

> **Note:** If `char ch = 'A';` were moved *above* the outer loop, the output would continue the alphabet through the whole grid (A, B, C, D... then E, F, G, H... on the next line).

---

## 3. Final Console Output
The program will output a $4 \times 4$ grid of characters:

```text
A B C D 
A B C D 
A B C D 
A B C D