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
**solid_triangle4** is a very interesting problem. If you are able to think and understand it is amazing. 
### *A detailed explanation can be found below for solid_triangle2*

### 2. **Number Triangle** : Let n = 3, n here is Number of Rows
```
       1
       1 2
       1 2 3
```
Similar variations can be implemented with characters. Refer to number_triangle1.
This pattern can also be created using numbers or characters. Check number_triangle1 and number_triangle2.

### 3. **Number Reversed Triangle** : Let n = 3, n here is the Number of Rows
```
       1
       2 1
       3 2 1
```
This pattern can also be created using characters. Refer to number_reversed_triangle1.
### *A detailed explanation can be found below for number_reversed_triangle1*

 ### 4. **Floyd’s Triangle** : Let n = 4, n here is Number of Rows
 ```
     1
     2 3
     4 5 6
     7 8 9 10
  ```

## Program Logic Explanation

### 1. Solid Right-Angled Triangle
- We use **nested loops**: an outer loop to control the number of rows and an inner loop to control the number of stars printed in each row.
- The **outer loop** runs from 1 to n, where n is the total number of rows in the triangle.
- The **inner loop** runs from 1 to the current value of the outer loop variable, printing * for each iteration. This creates an incrementing pattern for each row.

### 2. Number Triangle
- The **outer loop** runs from 1 to n, representing each row.
- The **inner loop** runs from 1 to the current row number (i), printing sequential numbers starting from 1 for each column.
- This results in a triangle where each row prints numbers starting from 1 up to the current row number.

### 2. Reverse Number Triangle
- The **outer loop** runs from `1` to `n`, representing each row.
- The **inner loop** runs from the current row number `i` down to `1`, printing numbers in descending order for each column.
- This results in a reverse triangle where each row starts from the row number and counts down to `1`.
- For example:
  - In Row 1, it prints `1`.
  - In Row 2, it prints `2 1`.
  - In Row 3, it prints `3 2 1`.

---
## solid_triangle2:
It is a pattern which gives output of **Solid Right-Angled Triangle** in it's character form but it changes after a row
```
       A
       B B
       C C C
```

### Explanation of Code:
```
       for (int i = 1; i <= n; i++){
             char ch = 'A' + (i - 1);
             for(int j = 0; j < i; j++){
                  cout<<ch <<" ";
             }
             cout<<endl;
       }
```

- **Input (`n`)**: The user enters the number of rows for the triangle.
- **Outer loop (`i`)**:
  - Runs from `1` to `n`, controlling the number of rows.
- **Character Assignment (`ch`)**:
  - The character `ch` is set as `'A' + (i - 1)`, which calculates the character based on the row number. For example:
    - **Row 1**: `'A' + (1 - 1) = 'A'`
    - **Row 2**: `'A' + (2 - 1) = 'B'`
    - **Row 3**: `'A' + (3 - 1) = 'C'`
- **Inner loop (`j`)**:
  - Runs from `0` to `i-1`, printing the character `i` times.

---

## number_reverse_triangle1:
It is a pattern which gives output of **Number Reversed Triangle** in it's character form where each row starts from a character corresponding to the row number and counts down to 'A'.
```
       A
       B A
       C B A
```

### Explanation of Code:
```
       for (int i = 1; i <= n; i++) {
             for (int j = i; j > 0; j--) {
                  char ch = 'A' + (j - 1);
                  cout << ch << " ";
             }
             cout << endl;  
       }
```

- **Input (`n`)**: The user enters the number of rows for the triangle.
- **Outer loop (`i`)**:
  - Runs from 1 to n, controlling the number of rows.
- **Inner loop (`j`)**:
  - Starts from i and runs down to 1, printing characters in descending order
- **Character Assignment (`ch`)**:
  - The character ch is calculated as 'A' + (j - 1), which determines the character based on the current column's position within the row. For each row:
    - **Row 1**: The loop prints 'A' + (1 - 1) = 'A' → Output: A
    - **Row 2**: The loop prints 'A' + (2 - 1) = 'B', 'A' + (1 - 1) = 'A' → Output: B A
    - **Row 3**: The loop prints 'A' + (3 - 1) = 'C', 'A' + (2 - 1) = 'B', 'A' + (1 - 1) = 'A' → Output: C B A
    
---
