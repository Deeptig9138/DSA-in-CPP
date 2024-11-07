# C++ Data Types 
This README provides an overview of **data types** in C++. This fundamental concepts is crucial to understanding how C++ works and form the foundation for writing more complex programs.

### Basic Data Types
C++ supports several built-in data types, which can be categorized into the following:

- Integer Types: Used for whole numbers.
  - int (typically 4 bytes)
  - short (typically 2 bytes)
  - long (typically 4 or 8 bytes)
  - long long (typically 8 bytes)

- Floating Point Types: Used for real numbers (decimals).
  - float (typically 4 bytes)
  - double (typically 8 bytes)
  - long double (typically 8 bytes or more)

- Character Types: Used for storing single characters.
  - char (typically 1 byte)

- Boolean Type: Used for logical values.
  - bool (can hold true or false) (typically 1 byte)

### Modifiers for Data Types
Modifiers can be used with integer types to alter the size and range:

- signed and unsigned: Control whether a variable can hold only positive values (unsigned) or both positive and negative values (signed).
- long and short: Control the size of the variable.

### Example:
```cpp
unsigned int positiveNumber;   // Can hold only positive values
long long largeNumber;         // Can store a larger number
```
