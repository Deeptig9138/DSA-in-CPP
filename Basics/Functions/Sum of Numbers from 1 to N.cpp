#include <iostream>
using namespace std;

//sum of numbers from 1 to n
int sumofNumbers(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum = sum + i;
    }
    return sum;
}

int main() {
    cout << sumofNumbers(10);

    return 0;
}
