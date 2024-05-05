#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

class Calculator {
public:
    // Constructor
    Calculator() {
        // Constructor implementation (if needed)
    }

    // Basic arithmetic operations
    double add(double num1, double num2) const {
        return num1 + num2;
    }

    double subtract(double num1, double num2) const {
        return num1 - num2;
    }

    double multiply(double num1, double num2) const {
        return num1 * num2;
    }

    double divide(double num1, double num2) const {
        if (num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Error: Cannot divide by zero!" << endl;
            return 0; // Return 0 or handle error appropriately
        }
    }

    // Scientific functions
    double squareRoot(double num) const {
        if (num >= 0) {
            return sqrt(num);
        } else {
            cout << "Error: Cannot calculate square root of a negative number!" << endl;
            return 0; // Return 0 or handle error appropriately
        }
    }

    double power(double base, double exponent) const {
        return pow(base, exponent);
    }

    // Conversion functions
    double feetToMeters(double feet) const {
        return feet * 0.3048;
    }

    double poundsToKilograms(double pounds) const {
        return pounds * 0.453592;
    }
};

int main() {
    Calculator calc;

    char mode;
    cout << "Select Calculator Mode:" << endl;
    cout << "A. Basic Arithmetic" << endl;
    cout << "B. Scientific Functions" << endl;
    cout << "C. Unit Conversions" << endl;
    cout << "Enter mode (A, B, C): ";
    cin >> mode;

    if (mode == 'A') {
        // Basic arithmetic mode
        char op;
        double num1, num2;

        cout << "Enter operator (+, -, *, /): ";
        cin >> op;

        cout << "Enter two numbers: ";
        cin >> num1 >> num2;

        switch (op) {
            case '+':
                cout << "Result: " << calc.add(num1, num2) << endl;
                break;
            case '-':
                cout << "Result: " << calc.subtract(num1, num2) << endl;
                break;
            case '*':
                cout << "Result: " << calc.multiply(num1, num2) << endl;
                break;
            case '/':
                cout << "Result: " << calc.divide(num1, num2) << endl;
                break;
            default:
                cout << "Invalid operator! Please enter one of +, -, *, /" << endl;
                break;
        }
    } else if (mode == 'B') {
        // Scientific functions mode
        char func;
        double num;

        cout << "Select function:" << endl;
        cout << "1. Square Root" << endl;
        cout << "2. Power (x^y)" << endl;
        cout << "Enter function (1, 2): ";
        cin >> func;

        switch (func) {
            case '1':
                cout << "Enter number to find square root: ";
                cin >> num;
                cout << "Result: " << calc.squareRoot(num) << endl;
                break;
            case '2':
                double base, exponent;
                cout << "Enter base: ";
                cin >> base;
                cout << "Enter exponent: ";
                cin >> exponent;
                cout << "Result: " << calc.power(base, exponent) << endl;
                break;
            default:
                cout << "Invalid function! Please enter 1 or 2" << endl;
                break;
        }
    } else if (mode == 'C') {
        // Unit conversions mode
        char unit;
        double value;

        cout << "Select conversion:" << endl;
        cout << "D. Feet to Meters" << endl;
        cout << "E. Pounds to Kilograms" << endl;
        cout << "Enter conversion (D, E): ";
        cin >> unit;

        switch (unit) {
            case 'D':
                cout << "Enter value in feet: ";
                cin >> value;
                cout << "Result: " << calc.feetToMeters(value) << " meters" << endl;
                break;
            case 'E':
                cout << "Enter value in pounds: ";
                cin >> value;
                cout << "Result: " << calc.poundsToKilograms(value) << " kilograms" << endl;
                break;
            default:
                cout << "Invalid conversion! Please enter D or E" << endl;
                break;
        }
    } else {
        cout << "Invalid mode selection! Please enter A, B, or C" << endl;
    }

    return 0;
}
