#include <iostream>
using namespace std;

int main() {
    int n = 4;  
    char ch = 'A'; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        char temp = ch;
        for (int j = 0; j <= i; j++) {
            cout << temp;
            temp++;  
        }

        temp -= 2;  
        for (int j = 0; j < i; j++) {
            cout << temp;
            temp--;  
        }
        cout << endl;
    }

    return 0;
}

