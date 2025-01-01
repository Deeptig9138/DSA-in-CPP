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
    cout << sum(a, b) <<endl;
    
    cout << a <<endl;
    cout << b <<endl;
    return 0;
}
