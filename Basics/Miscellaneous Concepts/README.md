# Understanding Bitwise Operators, Operator Precedence, Scope, and Data Type Modifiers

This repository provides an in-depth explanation of some fundamental programming concepts: **bitwise operators**, **operator precedence**, **scope (local vs global)**, and **data type modifiers**. These topics are essential for understanding low-level programming and writing efficient code.

---

## Bitwise Operators

Bitwise operators perform operations directly on the binary representations of integers. These operators are commonly used for low-level programming, such as hardware interfacing, cryptography, and performance optimization.

### Common Bitwise Operators:

| Operator         | Description               | Example (in binary)            |
|------------------|---------------------------|--------------------------------|
| *&*              | AND                       | 1010 & 1100 = 1000             |
| *straight line*  | OR                        | 1010 straight line 1100 = 1110 |
| *^*              | XOR (Exclusive OR)        | 1010 ^ 1100 = 0110             |
| *~*              | NOT (One's Complement)    | ~1010 = 0101                   |
| *<<*             | Left Shift                | 1010 << 1 = 10100              |
| *>>*             | Right Shift               | 1010 >> 1 = 0101               |

### Bitwise Operations Example:
```c
#include <stdio.h>

int main() {
    int a = 5; // Binary: 0101
    int b = 3; // Binary: 0011

    printf("a & b = %d\n", a & b); // Output: 1 (0001)
    printf("a | b = %d\n", a | b); // Output: 7 (0111)
    printf("a ^ b = %d\n", a ^ b); // Output: 6 (0110)

    return 0;
}
```

---

## Operator Precedence

Operator precedence determines the order in which operations are evaluated in an expression. Operators with higher precedence are evaluated before those with lower precedence.

### General Precedence Order (Highest to Lowest):
1. Parentheses: `()`
2. Unary Operators: `+`, `-`, `!`, `~` R to L
3. Multiplicative: `*`, `/`, `%`
4. Additive: `+`, `-`
5. Shift: `<<`, `>>`
6. Relational: `<`, `<=`, `>`, `>=`
7. Equality: `==`, `!=`
8. Bitwise AND: `&`
9. Bitwise XOR: `^`
10. Bitwise OR: `|`
11. Logical AND: `&&`
12. Logical OR: `||`
13. Assignment: `=`, `+=`, `-=`, etc. R to L

### Operator Precedence Example:
```c
#include <stdio.h>

int main() {
    int result = 3 + 4 * 2; // Multiplication evaluated first
    printf("Result = %d\n", result); // Output: 11

    return 0;
}
```

---

## Scope (Local vs Global)

Scope defines the visibility and lifetime of variables in a program.

### Local Scope:
Variables declared inside a function or block are local and accessible only within that block.
```c
void example() {
    int localVar = 10; // Local scope
    printf("%d", localVar); 
}
```

### Global Scope:
Variables declared outside of all functions are global and accessible throughout the program.
```c
int globalVar = 20; // Global scope

void example() {
    printf("%d", globalVar);
}
```

**Best Practices:**
- Use local variables to reduce side effects.
- Avoid excessive use of global variables to maintain modularity.

### Scope Example:
```c
#include <stdio.h>

int globalVar = 10;

void example() {
    int localVar = 20;
    printf("Global: %d, Local: %d\n", globalVar, localVar);
}

int main() {
    example();
    return 0;
}
```

---

## Data Type Modifiers

Data type modifiers are used to alter the properties of standard data types, such as their size or range.

### Common Modifiers:

| Modifier   | Effect                               | Example            |
|------------|--------------------------------------|--------------------|
| `signed`   | Default, allows positive & negative  | `signed int a;`    |
| `unsigned` | Allows only non-negative values      | `unsigned int b;`  |
| `short`    | Reduces size of the data type        | `short int c;`     |
| `long`     | Increases size of the data type      | `long int d;`      |
