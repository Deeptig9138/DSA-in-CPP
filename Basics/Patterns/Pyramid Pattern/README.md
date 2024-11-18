# Pyramid Pattern in C++

## Overview
This directory contains a C++ program that prints a **Pyramid Pattern**. Pyramid patterns are an excellent way to practice using nested loops and understanding how to manage spaces and symbols to create visually appealing shapes in programming.

## Example Output
Below are examples of different types of pyramid patterns that can be printed:

### 1. **Simple Pyramid** : Let n = 4, where n is the number of rows
```
    *
   * *
  * * *
 * * * *
```
This can be done with numbers and characters. Check out simple_pyramid1 & simple_pyramid2

### 2. **Increasing Number Pyramid** : Let n = 3, where n is the number of rows
```
      1
   1  2  1
1  2  3  2  1
```
Same thing can be done with characters. Check out increasing_number_pyramid & increasing_number_pyramid1
There is another variation of this which you can see at increasing_number_pyramid2

## Program Logic Explanation
*Note: This is a general program logic to build the pattern, it is not necessary that i may have applied the same method. These patterns can be achieved by various writing which comes under same logic. Understanding of logic is more important than the code.*

### 1. Simple Star Pyramid
- We use **nested loops**: an outer loop to handle the number of rows and two inner loops to handle spaces and stars.
- **Outer loop** runs from `1` to `n` for the number of rows.
- The first **inner loop** prints spaces:
  - Runs from `1` to `n - i`, where `i` is the current row number, to create leading spaces for proper alignment.
- The second **inner loop** prints `*`:
  - Runs from `1` to `i`, printing a `*` followed by a space.
 
## 2. Increasing Number Pyramid
- We use **nested loops**:
  - An **outer loop** to handle the number of rows (`1` to `n`).
  - An **inner loop** to print leading spaces for alignment.
  - An **inner loop** to print increasing numbers from `1` to the current row number `i`.
  - An **inner loop** to print decreasing numbers from `i - 1` back to `1`.
- **Outer loop** runs from `1` to `n` (the number of rows).
- **First inner loop** prints `n - i` spaces to align numbers in a pyramid shape.
- **Second inner loop** prints increasing numbers from `1` to `i`.
- **Third inner loop** prints decreasing numbers from `i - 1` to `1`.
