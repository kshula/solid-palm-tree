#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2;

    // Get input from user
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Perform calculation based on operator
    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
            break;
        case '/':
            if (num2 != 0) {
                cout << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
            } else {
                cout << "Error: Cannot divide by zero!" << endl;
            }
            break;
        default:
            cout << "Invalid operator! Please enter one of +, -, *, /" << endl;
            break;
    }

    return 0;
}
