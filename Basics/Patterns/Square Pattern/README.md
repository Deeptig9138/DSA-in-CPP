# Square Pattern in C++

## Overview
This directory contains a simple C++ program to print a **Square Pattern**. Square patterns are a great way to practice nested loops and are fundamental for understanding how to manage rows and columns in a 2D format using programming.

## Example Output
Below are examples of different types of square patterns that can be printed:

### 1. **Solid Square** : Let n = 4, n here is Number of Rows
 ```
      ****
      ****
      ****
      ****
 ```
Same thing can be done with numbers and characters.

### 2. **Number Square** : Let n = 3, n here is Number of Rows
 ```
      1 2 3
      4 5 6
      7 8 9
 ```

## Program Logic Explanation

### 1. Solid Square
- We use two **nested loops**: an outer loop to handle the rows and an inner loop to handle the columns within each row.
- The **outer loop** runs from 0 to n-1, where n is the size of the square (i.e., the number of rows and columns).
- The **inner loop** runs from 0 to n-1 for each iteration of the outer loop, printing * for each column in the current row.

### 2. Hollow Square
Prints * on the boundaries (first and last rows, first and last columns).
The inner space is left blank using conditions in the inner loop.

### 3. Number Square
Each row prints a constant number, starting from 1 up to N (where N is the number of rows/columns).
