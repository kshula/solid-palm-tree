#include <iostream>
#include "include\\calculator.h"

using namespace std;

int main() {
    Calculator calc;

    double num1, num2;

    // Prompt user to enter two numbers
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform calculator operations based on user input
    cout << "Addition: " << calc.add(num1, num2) << endl;
    cout << "Subtraction: " << calc.subtract(num1, num2) << endl;
    cout << "Multiplication: " << calc.multiply(num1, num2) << endl;

    // Check for division by zero
    if (num2 != 0) {
        cout << "Division: " << calc.divide(num1, num2) << endl;
    } else {
        cout << "Error: Cannot divide by zero!" << endl;
    }

    // Check for non-negative input for square root
    if (num1 >= 0) {
        cout << "Square Root of " << num1 << ": " << calc.squareRoot(num1) << endl;
    } else {
        cout << "Error: Cannot calculate square root of a negative number!" << endl;
    }

    cout << "Power: " << calc.power(num1, num2) << endl;
    cout << "Feet to Meters: " << calc.feetToMeters(num1) << endl;
    cout << "Pounds to Kilograms: " << calc.poundsToKilograms(num1) << endl;

    return 0;
}
