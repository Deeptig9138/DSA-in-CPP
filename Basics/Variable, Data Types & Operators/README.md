# C++ Variables, Data Types & Operators

This README provides an overview of **variables**, **data types**, and **operators** in C++. These fundamental concepts are crucial to understanding how C++ works and form the foundation for writing more complex programs.

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

## 3. Operators in C++

### What is an Operator?
An operator is a symbol that performs an operation on one or more operands (values). C++ supports various types of operators:

1. Arithmetic Operators
These operators are used for basic mathematical operations.
```
Operator	Operation	         Example
+	        Addition	          a + b
-	        Subtraction	          a - b
*	        Multiplication	          a * b
/	        Division	          a / b
%	        Modulus (Remainder)	  a % b
```

### Example:
- int a = 10, b = 3;
- int sum = a + b;       // sum = 13
- int remainder = a % b; // remainder = 1

2. Relational (Comparison) Operators
These operators are used to compare two values.
```
Operator	Operation	                Example
==	      Equal to	                a == b
!=	      Not equal to	            a != b
>	        Greater than	            a > b
<	        Less than	                a < b
>=	      Greater than or equal to	a >= b
<=	      Less than or equal to	    a <= b
```

### Example:
```cpp
if (a == b) {
    cout << "a is equal to b" << endl;
} else {
    cout << "a is not equal to b" << endl;
}
```

3. Logical Operators
These are used to perform logical operations, typically in conditional statements.
```
Operator	Operation	  Example
&&	      Logical AND	a && b
||        Logical OR  a||b
!	        Logical NOT	!a
```

### Example:
```cpp
if (a > 5 && b < 10) {
    cout << "a is greater than 5 and b is less than 10" << endl;
}
```

4. Assignment Operators
These are used to assign values to variables.
```
Operator	Operation	                Example
=	        Simple Assignment	        a = b
+=	      Addition Assignment	      a += b
-=	      Subtraction Assignment	  a -= b
*=	      Multiplication Assignment	a *= b
/=	      Division Assignment     	a /= b
%=	      Modulus Assignment	      a %= b
```

### Example:
- int x = 5;
- x += 3;  // x = 8
- x *= 2;  // x = 16

5. Increment and Decrement Operators
These operators are used to increase or decrease the value of a variable by 1.
```
Operator	Operation	 Example
++	      Increment	 a++ or ++a
--	      Decrement	 a-- or --a
```

### Example:
```cpp
int count = 0;
count++;  // count = 1
--count;  // count = 0
```

## Conclusion
Understanding variables, data types, and operators is essential for writing and debugging C++ programs. These building blocks help you manage and manipulate data efficiently in your C++ programs. Make sure to practice by writing small programs to reinforce these concepts.
