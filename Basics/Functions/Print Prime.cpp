#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) return false;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) return false;
    }
    return true;
}

// Function to print all prime numbers from 1 to n
void printPrimes(int n) {
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Prime numbers from 1 to " << n << ": ";
    printPrimes(n);

    return 0;
}
