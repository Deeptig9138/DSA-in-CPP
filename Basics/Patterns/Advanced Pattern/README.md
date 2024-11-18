# Advanced Patterns in C++

## Overview
This directory contains C++ programs that print **Advanced Patterns** using loops. The patterns are designed to help practice nested loops and the concept of spaces and symbols. The primary focus is on creating visually appealing shapes such as the **Hollow Diamond** and **Butterfly** patterns, which use stars (`*`) and spaces to form intricate designs.

## Example Output
Below are examples of different **advanced patterns** that can be printed:

### 1. **Hollow Diamond**: Let n = 5, where n is the number of rows
```
  *  
 * * 
*   *
 * * 
  *  
```

### 2. **Butterfly**: Let n = 5, where n is the number of rows
```
*    *
**  **
******
**  **
*    *
```

## Program Logic Explanation
*Note: This is a general program logic to build the pattern, it is not necessary that i may have applied the same method. These patterns can be achieved by various writing which comes under same logic. Understanding of logic is more important than the code.*

### 1. Hollow Diamond
- **Outer loop**: This loop handles the number of rows and determines how far the pattern extends. There are two parts: the upper half and the lower half.
- **Upper half**:
  - The first loop handles the spaces before the stars.
  - The second loop prints stars at the border of the pattern (the first and last positions in each row).
- **Lower half**:
  - The logic is symmetric, so the second part of the pattern is simply a mirror image of the upper half.

### 2. Butterfly
- **Outer loop**: This loop iterates through the rows of the butterfly, with one loop for the upper part and another for the lower part.
- **Upper part**:
  - The first inner loop prints stars on the left side of the pattern.
  - The second inner loop prints spaces in between the left and right parts of the butterfly.
  - The third inner loop prints stars on the right side of the pattern.
- **Lower part**:
  - The logic for the lower part is symmetric to the upper part, so it mirrors the upper half, starting with fewer stars and gradually increasing.
