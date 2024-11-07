# C++ Data Types 
This README provides an overview of **data types** in C++. These fundamental concepts are crucial to understanding how C++ works and form the foundation for writing more complex programs.

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

### Modifiers for Data Types
Modifiers can be used with integer types to alter the size and range:

- signed and unsigned: Control whether a variable can hold only positive values (unsigned) or both positive and negative values (signed).
- long and short: Control the size of the variable.

### Example:
1. unsigned int positiveNumber;   // Can hold only positive values
2. long long largeNumber;         // Can store a larger number