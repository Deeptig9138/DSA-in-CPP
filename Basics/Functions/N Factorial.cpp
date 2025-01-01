#include <iostream>
using namespace std;

// N Factorial
int fact(int n){
    int factorial = 1;
    for(int i = 1; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}

int main() {
    cout << fact(3);

    return 0;
}
