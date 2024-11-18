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
Same thing can be done with numbers and characters. solid_square1 & solid_square2

### 2. **Number Square** : Let n = 3, n here is Number of Rows
```
       1 2 3
       4 5 6
       7 8 9
```
Same thing can be done with characters. number_square1

## Program Logic Explanation
*Note: This is a general program logic to build the pattern, it is not necessary that i may have applied the same method. These patterns can be achieved by various writing which comes under same logic. Understanding of logic is more important than the code.*

### 1. Solid Square
- We use two **nested loops**: an outer loop to handle the rows and an inner loop to handle the columns within each row.
- The **outer loop** runs from 0 to n-1, where n is the size of the square (i.e., the number of rows and columns).
- The **inner loop** runs from 0 to n-1 for each iteration of the outer loop, printing * for each column in the current row.

### 2. Number Square
- We use two **nested loops:** the outer loop to handle the number of rows and the inner loop to handle the columns within each row.
- A separate variable, num, is used to track the current number to be printed. This variable starts at 1 and increments after each print.
