#include <iostream>
#include "calculator.h"

using namespace std;

int main() {
    Calculator calc;

    // Example usage of calculator functions
    double num1 = 10.0, num2 = 5.0;

    cout << "Addition: " << calc.add(num1, num2) << endl;
    cout << "Subtraction: " << calc.subtract(num1, num2) << endl;
    cout << "Multiplication: " << calc.multiply(num1, num2) << endl;
    cout << "Division: " << calc.divide(num1, num2) << endl;
    cout << "Square Root: " << calc.squareRoot(num1) << endl;
    cout << "Power: " << calc.power(num1, num2) << endl;
    cout << "Feet to Meters: " << calc.feetToMeters(num1) << endl;
    cout << "Pounds to Kilograms: " << calc.poundsToKilograms(num1) << endl;

    return 0;
}
