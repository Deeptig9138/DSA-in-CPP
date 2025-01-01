#include <iostream>
using namespace std;

//Sum of Digits of a Number
int sumofDigits(int num){
    int digSum = 0;
    while(num > 0){
        int lastDig = num % 10;
        num /= 10;
        
        digSum += lastDig;
    }
    return digSum;
}

int main() {
    cout << sumofDigits(2345);

    return 0;
}
