# Logic Analysis: Numeric Triangle (Internal Increment)

In this program, the **inner loop** does more than just control the length of the row; it also updates a local variable `num` to create a sequence within each line.

---

## 1. Program Structure

* **Outer Loop (`i`)**: Runs from `0` to `4` (5 iterations). It manages the vertical growth (rows).
* **Variable Reset (`int num = 1`)**: This is defined **inside** the outer loop. This means `num` is reset to `1` every time a new row starts.
* **Inner Loop (`j`)**: Runs from `0` to `i`. The number of elements in the row is equal to `i + 1`.
* **Increment Logic (`num++`)**: After printing the current value of `num`, it increases by 1 for the next column in that same row.

[Image of nested loop execution flow diagram for triangle pattern]

---

## 2. Step-by-Step Dry Run

| Row (`i`) | `num` Reset | Inner Loop (`j`) | `num` sequence | Row Output |
| :--- | :--- | :--- | :--- | :--- |
| **0** | `1` | `j=0` | `1` | `1` |
| **1** | `1` | `j=0, 1` | `1 -> 2` | `12` |
| **2** | `1` | `j=0, 1, 2` | `1 -> 2 -> 3` | `123` |
| **3