## C Programming: Scope and Lifetime

---

# 1. Scope

**Definition:**
> Scope defines the **region of the program** where a variable can be accessed or used.

In C, scope determines **which part of the code can see or use a particular variable**.

## Types of Scope in C

### 1️⃣ Local Scope
- **Definition:** A variable declared inside a function or block `{}`.
- **Accessible:** Only inside the function/block where it is declared.
- **Lifetime:** Exists during function execution; destroyed after the function ends.

**Example:**
```c
#include <stdio.h>

void test() {
    int x = 10; // local variable
    printf("x = %d\n", x);
}

int main() {
    test();
    // printf("%d", x); // ❌ ERROR: x not accessible here
    return 0;
}
```

### 2️⃣ Global Scope
- **Definition:** A variable declared outside all functions.
- **Accessible:** Anywhere in the program (all functions).
- **Lifetime:** Exists from program start to end.

**Example:**
```c
#include <stdio.h>

int g = 100; // global variable

void test() {
    printf("g = %d\n", g);
}

int main() {
    printf("g = %d\n", g);
    test();
    return 0;
}
```

### 3️⃣ Block Scope
- **Definition:** A variable declared inside a block `{}` (like if, for, while).
- **Accessible:** Only within that block.
- **Lifetime:** Created when block starts, destroyed when block ends.

**Example:**
```c
#include <stdio.h>
int main() {
    if (1) {
        int b = 20; // block variable
        printf("b = %d\n", b);
    }
    // printf("%d", b); // ❌ ERROR: b not accessible
    return 0;
}
```

### 4️⃣ Function Scope (Label Scope)
- **Definition:** Applies to labels used for `goto` statements.
- **Accessible:** Only inside the function where label is declared.
- **Lifetime:** Exists for the duration of the function execution.

**Example:**
```c
#include <stdio.h>
int main() {
start:
    printf("Inside function scope\n");
    goto start; // label accessible only inside this function
    return 0;
}
```

---

# 2. Lifetime

**Definition:**
> Lifetime determines **how long a variable exists in memory** during program execution.

## Types of Lifetime

### 1️⃣ Automatic (Local) Variables
- **Declared:** Inside functions without `static` keyword.
- **Lifetime:** Created when function is called, destroyed after function ends.

**Example:**
```c
void test() {
    int x = 5; // automatic local variable
    printf("x = %d\n", x);
}
```

### 2️⃣ Global Variables
- **Declared:** Outside all functions.
- **Lifetime:** Exists from start of program to end.

### 3️⃣ Static Variables
- **Declared:** Inside function/block with `static` keyword.
- **Scope:** Limited to block/function.
- **Lifetime:** Exists for **entire program execution**.
- **Use:** Retains value between function calls.

**Example:**
```c
#include <stdio.h>

void counter() {
    static int c = 0;
    c++;
    printf("Counter = %d\n", c);
}

int main() {
    counter(); // 1
    counter(); // 2
    counter(); // 3
    return 0;
}
```

### ⚠️ Key Difference: Scope vs Lifetime

| Property | Scope | Lifetime |
|---------|-------|---------|
| Local   | Function/block | Only during function/block execution |
| Global  | Whole program  | Entire program execution |
| Static  | Function/block | Entire program execution |
| Function (Label) | Inside function | During function execution |

**Golden Rule:**
- Scope = **where variable can be used**
- Lifetime = **how long variable exists in memory**

---

# 3. Use Cases

- **Local variables:** Temporary calculations, loops, function operations.
- **Global variables:** Shared data, flags across functions.
- **Static variables:** Counting function calls, caching values.
- **Block variables:** Temporary block operations.
- **Function labels:** Rarely used, sometimes in low-level control flow.

---

# 4. Tips & Notes

1. **Prefer local over global:** Easier to debug, safer.
2. **Static variables** are useful in recursion or remembering state.
3. **Understand base case in recursion:** often requires correct scope and lifetime.
4. **Avoid function labels unless necessary.**
5. **Lifetime issues** can cause unexpected results in recursion or loops.

---

# 5. Summary

- **Scope**: Determines *where* a variable is accessible.
- **Lifetime**: Determines *how long* the variable exists in memory.
- **C provides** Local, Global, Block, Function scope; Automatic, Global, Static lifetime.
- Correct use of **scope & lifetime** helps in writing clean, bug-free, and efficient programs.

