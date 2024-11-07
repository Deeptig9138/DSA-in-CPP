# C++ Type Casting
This README provides an overview of **type casting** in C++. This concepts is important to understand how data of one type can be casted to another type, allowing for better control over operations in your program.

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
```
In this example, num (an int) is automatically converted to double and stored in the result.

### Explicit Type Casting (Manual Type Conversion)
Explicit type casting occurs when the programmer uses a casting operator to forcefully convert a variable from one type to another. This is usually done when converting a larger data type to a smaller one or converting between non-compatible types.

The syntax for explicit casting is:
(type) variable

For example:
```cpp
#include <iostream>
using namespace std;

int main() {
    double num = 9.87;
    int result = (int) num;  // Explicit type casting from double to int
    cout << "Integer value: " << result << endl;  // Output: 9
    return 0;
}
```
In this case, the double value 9.87 is explicitly cast to an int, and the result is 9 (the fractional part is discarded).

### Different Types of C++ Casts
C++ provides four types of casting operators that give the programmer more control over type conversions.

## 1. static_cast
Used for conversions between types that are related by inheritance or simple conversions between built-in types.

Example:
```cpp
double pi = 3.14;
int intPi = static_cast<int>(pi);  // Converts double to int
```

## 2. dynamic_cast
Used for safe downcasting in class hierarchies. It works only with pointers or references to classes in a polymorphic class hierarchy (i.e., a class that has at least one virtual function).

Example:
```cpp
class Base { virtual void foo() {} };
class Derived : public Base {};

Base *b = new Derived();
Derived *d = dynamic_cast<Derived*>(b);  // Safe downcast
```

## 3. const_cast
Used to add or remove the const qualifier from a variable. This is useful when you want to modify a constant value (though this should generally be avoided unless necessary).

Example:
```cpp
const int x = 10;
int* ptr = const_cast<int*>(&x);  // Remove const from x
*ptr = 20;  // Modifying the value is undefined behavior
```

## 4. reinterpret_cast
Used for low-level casting between pointer types, including converting one type of pointer to another. This type of cast should be used with caution, as it can lead to undefined behavior if misused.

Example:
```cpp
int a = 10;
void* ptr = &a;
char* charPtr = reinterpret_cast<char*>(ptr);  // Convert pointer to char pointer
```
