# C++ Variables, Data Types & Operators

This README provides an overview of **variables**, **data types**, and **operators** in C++. These fundamental concepts are crucial to understanding how C++ works and form the foundation for writing more complex programs.

## 1. Variables in C++

### What is a Variable?
A **variable** is a storage location in memory that holds data, which can be changed during program execution. It is given a name (identifier) to reference the data stored in it.

### Declaring Variables
In C++, you must declare a variable before using it. The syntax for declaring a variable is:
```cpp
<data_type> <variable_name>;
```

### Example:
1. int age;
2. double salary;
3. char grade;

### Initializing Variables
Variables can also be initialized (assigned a value) at the time of declaration.

### Example:
1. int age = 25;
2. double salary = 45000.50;
3. char grade = 'A';

## 2. Data Types in C++

### Basic Data Types
C++ supports several built-in data types, which can be categorized into the following:

- Integer Types: Used for whole numbers.
  - 1. int (typically 4 bytes)
  - 2. short (typically 2 bytes)
  - 3. long (typically 4 or 8 bytes)
  - 4. long long (typically 8 bytes)

- Floating Point Types: Used for real numbers (decimals).
  - 1. float (typically 4 bytes)
  - 2. double (typically 8 bytes)
  - 3. long double (typically 8 bytes or more)

- Character Types: Used for storing single characters.
  - 1. char (typically 1 byte)

- Boolean Type: Used for logical values.
  - 1. bool (can hold true or false) (typically 1 byte)
