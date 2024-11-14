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

### 2. **Reverse Number Triangle** : Let n = 3, n here is the Number of Rows
```
       1
       2 1
       3 2 1
```
This pattern can also be created using characters. Refer to reverse_number_triangle1.

## Program Logic Explanation

### 1. Solid Reverse Right-Angled Triangle
- We use **nested loops**: an outer loop to control the number of rows and an inner loop to control the number of stars printed in each row.
- The **outer loop** runs from `n` to `1`, where `n` is the total number of rows in the triangle.
- The **inner loop** runs from `1` to the current value of the outer loop variable, printing `*` for each iteration. This creates a decreasing pattern for each row.

### 2. Reverse Number Triangle
- The **outer loop** runs from `1` to `n`, representing each row.
- The **inner loop** runs from the current row number `i` down to `1`, printing numbers in descending order for each column.
- This results in a reverse triangle where each row starts from the row number and counts down to `1`.
- For example:
  - In Row 1, it prints `1`.
  - In Row 2, it prints `2 1`.
  - In Row 3, it prints `3 2 1`.
