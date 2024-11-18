# Reverse Triangle Pattern in C++

## Overview
This directory contains a simple C++ program to print a **Reverse Triangle Pattern**. Reverse triangle patterns are great for practicing nested loops and help in understanding how to manage rows and columns in a decreasing format using programming.

## Example Output
Below are examples of different types of reverse triangle patterns that can be printed:

### 1. **Solid Reverse Right-Angled Triangle** : Let n = 4, n here is the Number of Rows
```
       * * * *
       * * *
       * *
       *
```
This pattern can also be created using numbers or characters. Check reverse_solid_triangle1 and reverse_solid_triangle2.

### 2. **Reverse Number Reversed Triangle** : Let n = 3, n here is the Number of Rows
```
       3 2 1
       2 1
       1
```
This pattern can also be created using characters. Check reverse_number_reversed_triangle3.
There is another version of it. Check reverse_number_reversed_triangle1 and reverse_number_reversed_triangle2.

### 3. **Inverted Triangle** : Let n = 4, n here is the Number of Rows
```
       1 1 1 1
         2 2 2
           3 3
             4
```
This pattern can also be created using characters. Check inverted_triangle1.

## Program Logic Explanation

### 1. Solid Reverse Right-Angled Triangle
- We use **nested loops**: an outer loop to control the number of rows and an inner loop to control the number of stars printed in each row.
- The **outer loop** runs from `n` to `1`, where `n` is the total number of rows in the triangle.
- The **inner loop** runs from `1` to the current value of the outer loop variable, printing `*` for each iteration. This creates a decreasing pattern for each row.

### 2. Reverse Number Reversed Triangle
- We use **nested loops**: an outer loop to control the number of rows and an inner loop to control the numbers printed in each row.
- The **outer loop** runs from `n` to `1`, where `n` is the total number of rows in the triangle.
- The **inner loop** prints numbers in reverse order, starting from the current row number down to 1. For example:
    - Row 1: starts from `n` and prints numbers from `n` down to `1`.
    - Row 2: starts from `n-1` and prints numbers from `n-1` down to `1`.
    - Row 3: starts from `n-2` and prints numbers from `n-2` down to `1`.
- This creates a pattern where the numbers in each row decrease in both the number of elements and their values.

### 3. Inverted Triangle
- We use **nested loops**: an outer loop to control the number of rows and inner loops to manage spaces and numbers printed in each row.
- The **outer loop** runs from `1` to `n`, where `n` is the total number of rows in the triangle.
- The first **inner loop** prints spaces at the beginning of each row:
  - The number of spaces for row `i` is `(i - 1)`. This creates the indentation required for the inverted shape.
- The second **inner loop** prints the number `i` in each row:
  - The number of times the number `i` is printed in row `i` is `(n - i + 1)`, ensuring that the count of printed numbers decreases with each row.
- This results in a pattern where each row is indented further to the right and has fewer repetitions of the number, giving it the shape of an inverted triangle.
