# Logic Analysis: Right-Angled Triangle Pattern

This program uses **nested loops** where the behavior of the **inner loop** is directly dependent on the current value of the **outer loop**. This creates a triangular shape rather than a square.

---

## 1. Program Structure
* **Outer Loop (`i`)**: Runs from `0` to `10`. This determines the total number of **rows** (11 rows total).
* **Dependent Inner Loop (`j`)**: Runs from `0` up to `i`. The condition `j < i + 1` means the number of stars printed is always equal to the current row index plus one.
* **The Increment**: Each time the outer loop completes one cycle, the inner loop is allowed to run one extra time compared to the previous row.

---

## 2. Step-by-Step Dry Run



| Row Index (`i`) | Inner Condition (`j < i + 1`) | Inner Loop Range | Stars Printed |
| :--- | :--- | :--- | :--- |
| **0** | `j < 1` | `j = 0` | `*` |
| **1** | `j < 2` | `j = 0, 1` | `**` |
| **2** | `j < 3` | `j = 0, 1, 2` | `***` |
| **3** | `j < 4` | `j = 0, 1, 2, 3` | `****` |
| ... | ... | ... | ... |
| **10** | `j < 11` | `j = 0, 1, ..., 10` | `***********` |

### Why it forms a triangle:
1.  In the **first row** ($i=0$), the inner loop only runs **once**.
2.  In the **second row** ($i=1$), the inner loop runs **twice**.
3.  This dependency ($j$ limited by $i$) causes the line length to grow by one character every time the row changes.

---

## 3. Visual Representation of Output

The code will produce a right-angled triangle with 11 rows:

```text
*
**
***
****
*****
******
*******
********
*********
**********
***********