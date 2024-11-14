# Triangle Pattern in C++

## Overview
This directory contains a simple C++ program to print different **Triangle Patterns**. Triangle patterns help in understanding nested loops and provide an excellent foundation for managing rows and columns in a progressively increasing format using programming.

## Example Output
Below are examples of different types of triangle patterns that can be printed:

### 1. **Solid Right-Angled Triangle** : Let n = 4, n here is Number of Rows
```
       *
       * *
       * * *
       * * * *
```
This pattern can also be created using numbers or characters. Check solid_triangle1 and solid_triangle2.

### 2. **Number Triangle** : Let n = 3, n here is Number of Rows
```
       1
       1 2
       1 2 3
```
Similar variations can be implemented with characters. Refer to number_triangle1.

## Program Logic Explanation

### 1. Solid Right-Angled Triangle
- We use **nested loops**: an outer loop to control the number of rows and an inner loop to control the number of stars printed in each row.
- The **outer loop** runs from 1 to n, where n is the total number of rows in the triangle.
- The **inner loop** runs from 1 to the current value of the outer loop variable, printing * for each iteration. This creates an incrementing pattern for each row.

### 2. Number Triangle
- The **outer loop** runs from 1 to n, representing each row.
- The **inner loop** runs from 1 to the current row number (i), printing sequential numbers starting from 1 for each column.
- This results in a triangle where each row prints numbers starting from 1 up to the current row number.
