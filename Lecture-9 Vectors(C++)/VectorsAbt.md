# Vectors in C++

## Introduction

A **vector** in C++ is a dynamic array provided by the **Standard Template Library (STL)**. Unlike normal arrays, vectors can **automatically resize themselves** when elements are added or removed.

Vectors are defined in the **`<vector>`** header file and are widely used because they make memory management easier and provide many built-in functions.

---

# Why Use Vectors?

Normal arrays in C++ have some limitations:

- Their size must be fixed at the time of declaration.
- They cannot grow or shrink during runtime.

Vectors solve this problem by allowing **dynamic resizing**, which means elements can be added or removed at any time.

Advantages of vectors:

- Dynamic size
- Automatic memory management
- Built-in functions for operations
- Easy insertion and deletion
- Works with STL algorithms

---

# Declaring a Vector

To use vectors, you must include the vector library.

```cpp
#include <vector>