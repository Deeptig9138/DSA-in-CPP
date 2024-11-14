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

## Program Logic Explanation

### 1. Solid Reverse Right-Angled Triangle
- We use **nested loops**: an outer loop to control the number of rows and an inner loop to control the number of stars printed in each row.
- The **outer loop** runs from `n` to `1`, where `n` is the total number of rows in the triangle.
- The **inner loop** runs from `1` to the current value of the outer loop variable, printing `*` for each iteration. This creates a decreasing pattern for each row.
