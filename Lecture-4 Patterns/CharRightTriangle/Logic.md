# Logic Analysis: Numeric Triangle Pattern (Row-Based)

This program uses **nested loops** to create a triangular pattern. Unlike a standard grid, the content of each row is determined by the current row number itself.

---

## 1. Program Structure
* **Outer Loop (`i`)**: Runs from `0` to `4`. It controls the **number of rows** (5 rows total).
* **Variable Reset (`int num = 1`)**: Note that `num` is initialized inside the outer loop, but in this specific code, it is not actually used in the `printf` statement.
* **Inner Loop (`j`)**: Runs from `0` up to `i` (`j < i + 1`). This determines how many numbers are printed in each row.
* **The Print Logic (`i + 1`)**: Instead of printing a star or the column index, the program prints the **current row count**.



---

## 2. Step-by-Step Dry Run

| Row Index (`i`) | Value to Print (`i + 1`) | Inner Loop Limit (`j < i + 1`) | Output for Row |
| :--- | :--- | :--- | :--- |
| **0** | `1` | Runs 1 time (`j=0`) | `1` |
| **1** | `2` | Runs 2 times (`j=0, 1`) | `22` |
| **2** | `3` | Runs 3 times (`j=0, 1, 2`) | `333` |
| **3** | `4` | Runs 4 times (`j=0, 1, 2, 3`) | `4444` |
| **4** | `5` | Runs 5 times (`j=0, 1, 2, 3, 4`) | `55555` |

---

## 3. Key Observations

### The "Same Number" Logic
Because the `printf` uses `i + 1`, every number in a specific row will be the same. The value only changes when the **outer loop** increments.

### The Unused Variable
> **Note:** The line `int num = 1;` is declared inside the outer loop but is never used in the `printf` or the logic. If you replaced `i + 1` with `num++`, each row would start with `1 2 3...` instead.

---

## 4. Final Console Output
The program will output the following triangle:

```text
1
22
333
4444
55555