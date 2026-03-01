# Code Logic Analysis: Nested Loops for Pattern Printing

This program uses **nested for-loops** to generate a 2D grid of characters. In this specific case, it prints a $4 \times 4$ square of stars (`*`).

---

## 1. Code Overview
The program consists of an **Outer Loop** and an **Inner Loop**:
* **Outer Loop (`i`):** Controls the number of **rows** (vertical).
* **Inner Loop (`j`):** Controls the number of **columns** (horizontal).



---

## 2. Step-by-Step Dry Run ($n=4$)

| Iteration (Outer) | Condition ($i < 4$) | Inner Loop Execution ($j=0$ to $3$) | Resulting Line |
| :--- | :--- | :--- | :--- |
| **$i = 0$** | True | Prints `*` four times | `****` |
| **$i = 1$** | True | Prints `*` four times | `****` |
| **$i = 2$** | True | Prints `*` four times | `****` |
| **$i = 3$** | True | Prints `*` four times | `****` |
| **$i = 4$** | **False** | *Loop terminates* | — |

### Detailed Execution Flow:
1.  The **Outer Loop** starts at $i=0$.
2.  The **Inner Loop** starts. It runs completely from $j=0$ up to $j=3$.
    * It prints a `*` during each of these 4 steps.
3.  Once the Inner Loop finishes, `printf("\n");` is executed. This moves the cursor to a **new line**.
4.  The Outer Loop increments ($i++$) and the entire process repeats until $i$ reaches 4.

---

## 3. Key Logic Components

### 0-Based Indexing
The code uses the standard programming convention:
* **Start:** `0`
* **Condition:** `< 4`
* This ensures the code runs exactly **4 times** (0, 1, 2, 3).

### The Role of `printf("\n")`
This statement is placed **outside** the inner loop but **inside** the outer loop. 
> **Warning:** If you move `\n` inside the inner loop, the stars will print in a single vertical column instead of a square.

---

## 4. Final Output
The program will render the following on the console:
```text
****
****
****
****