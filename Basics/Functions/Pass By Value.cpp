#include <iostream>
using namespace std;

int sum(int a, int b){
    a = a + 10; 
    b = b + 10;
    int sum = a + b;
    return sum;
}

int main() {
    int a = 5;
    int b = 4;
    cout << sum(a, b) <<endl; // 29
    
    cout << a <<endl; // 5
    cout << b <<endl; // 4
    return 0;
}
