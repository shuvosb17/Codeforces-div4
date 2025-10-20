

### 🧠 **Learning Outcome**

After solving this problem, a learner will be able to:

1. Understand and analyze **simple mathematical patterns** in alternating sequences.
2. Apply **modulus operations** (`%`) to determine whether the number of elements in a pattern affects the final sum.
3. Use **conditional logic** in C++ to derive and output results efficiently.
4. Strengthen problem-solving skills involving **loops**, **conditional statements**, and **input/output handling** in competitive programming.

---

### ⚙️ **Approach**

1. **Understanding the Sequence:**

   * The sequence alternates between `x` and `-x`, starting with `x`.
     Example: for `x = 2` and `n = 5`, the sequence is `2, -2, 2, -2, 2`.

2. **Observation:**

   * Each pair `(x, -x)` sums to `0`.
   * If `n` is **even**, all terms cancel each other out → sum = `0`.
   * If `n` is **odd**, there will be one extra `x` → sum = `x`.

3. **Algorithm:**

   * For each test case:

     * Read integers `x` and `n`.
     * Check if `n` is even:

       * If yes → print `0`.
       * If no → print `x`.

4. **Time Complexity:**

   * ( O(t) ), where `t` is the number of test cases (since each test is processed in constant time).

5. **Example:**

   ```
   Input:
   4
   1 4
   2 5
   3 6
   4 7

   Output:
   0
   2
   0
   4
   ```

   Explanation:

   * (1,4): Even → 0
   * (2,5): Odd → 2
   * (3,6): Even → 0
   * (4,7): Odd → 4

---

