#include <iostream>
using namespace std;

int main() {
    int n = 4;  
    int num = 1; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        for (int j = 0; j <= i; j++) {
            cout << num;
            num++;  
        }
  
        for (int j = 0; j < i; j++) {
            cout << num-2;
            num--;  
        }
        cout << endl;
    }

    return 0;
}