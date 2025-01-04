# Binary Number System 📘

Welcome to the **Binary Number System** repository! This repository provides an in-depth understanding of binary numbers, their conversions, and useful tricks for working with them. Mastering binary is essential for understanding computer operations, low-level programming, and data representation.

---

## Decimal to Binary Conversion
Decimal numbers can be converted to binary by repeatedly dividing the number by 2 and recording the remainders in reverse order.

### Steps:
1. Divide the decimal number by 2.
2. Record the remainder (0 or 1).
3. Continue dividing the quotient by 2 until the quotient is 0.
4. Write the remainders in reverse order.

### Example:
Convert `13` to binary:
```
13 ÷ 2 = 6 remainder 1
 6 ÷ 2 = 3 remainder 0
 3 ÷ 2 = 1 remainder 1
 1 ÷ 2 = 0 remainder 1
```

Binary: 1101

### Code Example:
```cpp 
#include <iostream>
using namespace std;

// This code use a data structure called stack to store the value and print it. It uses first in last out method.
// You can study this in data structure repository.
// Other version without a data structure is given here in Decimal to Binary.cpp

void decimalToBinary(int n) {
    if (n == 0) return;
    decimalToBinary(n / 2);
    cout << n % 2;
}

int main() {
    int number = 13;
    cout << "Binary of " << number << ": ";
    decimalToBinary(number);
    return 0;
}
```

---

## Binary to Decimal Conversion
To convert binary to decimal, multiply each binary digit by 2^position, where the position starts from 0 on the right.

### Steps:
1. Write the binary number and its positional powers of 2.
2. Multiply each binary digit by 2^position.
3. Sum up the results.
   
### Example:
Convert 1101 to decimal:
```
1 × 2³ + 1 × 2² + 0 × 2¹ + 1 × 2⁰ = 8 + 4 + 0 + 1 = 13
```

Decimal: 13

### Code Example:
```
#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;
    int size = binary.size();
    for (int i = 0; i < size; i++) {
        if (binary[size - i - 1] == '1') {
            decimal += pow(2, i);
        }
    }
    return decimal;
}

int main() {
    string binary = "1101";
    cout << "Decimal of " << binary << ": " << binaryToDecimal(binary);
    return 0;
}
```

---

## Common Binary Numbers and Short Tricks

### Common Binary Numbers:

| **Decimal**	| **Binary** |
|-------------|------------|
| 0	          | 0          |
| 1	          | 1          |
| 2	          | 10         |
| 3	          | 11         |
| 4	          | 100        |
| 5	          | 101        |
| 8	          | 1000       |
| 16          | 10000      |
| 32          | 100000     |

### Short Tricks:
1. **Quick Doubling:**
- Appending a 0 to a binary number doubles its value.
- Example: 101 (5) → 1010 (10).

2. **Quick Halving:**
- Removing the last digit divides the number by 2 (ignoring remainders).
- Example: 1010 (10) → 101 (5).

3. **Binary Addition Rule:**
- 0 + 0 = 0
- 1 + 0 = 1
- 1 + 1 = 10 (Carry the 1).

---

## Two's Complement
Two's complement is a method for representing negative binary numbers, allowing for seamless arithmetic operations in binary.

### Positive Numbers
For positive integers, the binary representation remains as-is with the Most Significant Bit (MSB) as 0.
Example: 5 in 8-bit binary is 00000101.

### Negative Numbers
For negative numbers, two's complement representation is used. The MSB is 1, indicating negativity.

### Steps to Find Two's Complement:
1. Write the binary representation of the positive number.
2. Invert all bits (change 0 to 1 and 1 to 0).
3. Add 1 to the least significant bit.
   
### Example:
Find the two's complement of 5 (binary: 0101):

1. Invert the bits: 1010.
2. Add 1: 1010 + 1 = 1011.

Two's complement of 5 is 1011, representing -5 in binary.

### Code Example:
```
#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int num = 5; // Positive number
    int twosComplement = (~num) + 1; // Two's complement formula
    cout << "Two's complement of " << num << " is: " << bitset<8>(twosComplement);
    return 0;
}
```
