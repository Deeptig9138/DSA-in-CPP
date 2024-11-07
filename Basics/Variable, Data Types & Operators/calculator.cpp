#include <iostream>
using namespace std;

int main(){
    double num1, num2;
    char operation;

    cout<<"Enter num1 : ";
    cin>>num1;

    cout<<"Select a operation (+, -, *, /) : "; 
    cin>>operation;

    cout<<"Enter num2 : ";
    cin>>num2;

    switch (operation){
        case '+':
            cout<<num1 + num2 <<endl;
            break;
        case '-':
            cout << "Result: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "Result: " << num1 * num2 << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << "Result: " << num1 / num2 << endl;
            } else {
                cout << "Error! Division by zero." << endl;
            }
            break;
        default:
            cout << "Invalid operator!" << endl;
            break;
    }
    return 0;
}