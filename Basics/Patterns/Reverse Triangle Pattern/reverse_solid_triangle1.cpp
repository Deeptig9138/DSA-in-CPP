#include <iostream>
using namespace std;

int main() {
    int n = 4; 

    for (int i = 0; i < n; i++) {
        int num = 1 + i; 
        for (int j = n - i; j > 0; j--) {
            cout << num << " "; 
        }
        cout << endl;
    }

    return 0;
}
