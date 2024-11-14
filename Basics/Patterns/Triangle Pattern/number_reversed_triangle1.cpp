#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = i; j > 0; j--) {
            char ch = 'A' + (j - 1);  
            cout << ch << " ";
        }
        cout << endl; 
    }

    return 0;
}
