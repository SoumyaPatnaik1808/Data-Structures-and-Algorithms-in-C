# Programming Fundamentals: Understanding Loops

To master loops, it is essential to perform a **Dry Run**—a step-by-step trace of the code execution to visualize how variables change over time.

---

## 1. Dry Run Trace (n = 4)

In this example, we trace a nested loop structure where the outer loop controls the rows and the inner loop controls the columns.

### Step-by-Step Execution:

1.  **Start:** Initialize $n = 4$.
2.  **Outer Loop ($i=1$):** $1 \le 4$ is **True**. Enter the loop.
    * **Inner Loop:**
        * $j=1$: Print `1`.
        * $j=2$: Print `2`.
        * $j=3$: Print `3`.
        * $j=4$: Print `4`.
        * $j=5$: Loop stops ($5 \le 4$ is **False**).
    * **Command:** `cout << endl;` (Cursor moves to the next line).
3.  **Outer Loop ($i=2$):** $2 \le 4$ is **True**. Enter the loop.
    * **Inner Loop:** $j$ resets to $1$! It prints `1 2 3 4` again.
    * **Command:** `cout << endl;`
4.  **Repeat:** This logic continues for $i=3$ and $i=4$.
5.  **Stop:** When $i$ becomes $5$, the outer loop condition ($5 \le 4$) becomes **False**, and the program exits the loop.



---

## 2. Important Variation: 0-Based Indexing

While 1-to-$n$ is intuitive, standard programming (especially when working with arrays and memory) typically utilizes **0-based indexing**.

### The Logic
A loop running from $0$ to $< n$ executes the **exact same number of times** as a loop running from $1$ to $\le n$.

> **Comparison:**
> * **1-based:** `for (int i = 1; i <= n; i++)`
> * **0-based:** `for (int i = 0; i < n; i++)`

### Code Variation (The Professional Standard)
This variation is preferred in advanced algorithms and system-level programming.

```cpp
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        // Logic goes here
        cout << j + 1 << " ";
    }
    cout << endl;
}