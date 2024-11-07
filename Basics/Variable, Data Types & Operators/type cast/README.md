# C++ Type Casting
This README provides an overview of **type casting** in C++. This concepts is important to understand how data of one type can be casted to another type, allowing for better control over operations in your program.

## 1. Type Casting in C++

### What is Type Casting?
**Type casting** refers to explicitly converting a variable from one data type to another. In C++, type casting can be done in two ways:

1. **Implicit Type Casting (Automatic Casting)**: This happens automatically by the compiler when there is no loss of information in the conversion.
2. **Explicit Type Casting (Manual Casting)**: This is when the programmer manually specifies the type conversion.

### Implicit Type Casting (Automatic Type Conversion)
Implicit type casting occurs when the compiler automatically converts a smaller data type into a larger one. This is done when there is no risk of losing information.

For example:
```cpp
#include <iostream>
using namespace std;

int main() {
    int num = 100;
    double result = num;  // Implicit type casting from int to double
    cout << "Double value: " << result << endl;  // Output: 100.0
    return 0;
}

