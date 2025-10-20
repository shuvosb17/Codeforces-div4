## 🧩 Problem Title

**A. Sublime Sequence**

---

## 🎯 Learning Outcomes

After completing this problem, the learner will be able to:

1. **Analyze mathematical patterns** in alternating integer sequences and determine relationships between sequence length and resulting sums.
2. **Apply conditional logic** effectively to derive results based on even and odd values using modulus (`%`) operations.
3. **Implement efficient input/output handling** in C++ for multiple test cases.
4. **Strengthen algorithmic thinking** by recognizing patterns that allow constant-time solutions instead of iterative computation.
5. **Understand optimization** — realizing that no explicit summation is needed once the mathematical pattern is observed.

---

## ⚙️ Approach

### 1. **Understanding the Sequence**

* Farmer John generates a sequence of length `n` using a starting integer `x`, alternating between positive and negative values of `x`.
* The sequence looks like:
  [
  x, -x, x, -x, \dots
  ]
  starting with `x`.

**Example:**
If `x = 3` and `n = 5`, the sequence is:
`3, -3, 3, -3, 3`.

---

### 2. **Identifying the Pattern**

* Every two consecutive elements `(x, -x)` sum to zero.
* Therefore:

  * If `n` is **even**, all pairs cancel out → total sum = **0**.
  * If `n` is **odd**, one extra `x` remains → total sum = **x**.

This eliminates the need for looping or summing explicitly.

---

### 3. **Algorithm Steps**

1. Read the number of test cases `t`.
2. For each test case:

   * Read integers `x` and `n`.
   * If `n % 2 == 0`, print `0`.
   * Otherwise, print `x`.

---

### 4. **Time and Space Complexity**

* **Time Complexity:** O(t) — each test case requires constant-time operations.
* **Space Complexity:** O(1) — no additional data structures are required.

---

### 5. **Example Walkthrough**

**Input:**

```
4
1 4
2 5
3 6
4 7
```

**Processing:**

| x | n | n % 2 | Output |
| - | - | ----- | ------ |
| 1 | 4 | 0     | 0      |
| 2 | 5 | 1     | 2      |
| 3 | 6 | 0     | 0      |
| 4 | 7 | 1     | 4      |

**Output:**

```
0
2
0
4
```

---

### 6. **Final C++ Code**

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, x, n;
    cin >> t;
    while (t--) {
        cin >> x >> n;
        if (n % 2 == 0)
            cout << 0 << endl;
        else
            cout << x << endl;
    }
    return 0;
}
```
