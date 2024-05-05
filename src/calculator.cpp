#include "include\\calculator.h"
#include <cmath>

// Basic arithmetic operations
double Calculator::add(double num1, double num2) const {
    return num1 + num2;
}

double Calculator::subtract(double num1, double num2) const {
    return num1 - num2;
}

double Calculator::multiply(double num1, double num2) const {
    return num1 * num2;
}

double Calculator::divide(double num1, double num2) const {
    if (num2 != 0) {
        return num1 / num2;
    } else {
        // Handle division by zero error (e.g., throw an exception)
        return 0; // Default return value (modify as needed)
    }
}

// Scientific functions
double Calculator::squareRoot(double num) const {
    if (num >= 0) {
        return sqrt(num);
    } else {
        // Handle invalid input (e.g., throw an exception)
        return 0; // Default return value (modify as needed)
    }
}

double Calculator::power(double base, double exponent) const {
    return pow(base, exponent);
}

// Unit conversions
double Calculator::feetToMeters(double feet) const {
    return feet * 0.3048;
}

double Calculator::poundsToKilograms(double pounds) const {
    return pounds * 0.453592;
}
