#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
public:
    // Basic arithmetic operations
    double add(double num1, double num2) const;
    double subtract(double num1, double num2) const;
    double multiply(double num1, double num2) const;
    double divide(double num1, double num2) const;

    // Scientific functions
    double squareRoot(double num) const;
    double power(double base, double exponent) const;

    // Unit conversions
    double feetToMeters(double feet) const;
    double poundsToKilograms(double pounds) const;
};

#endif // CALCULATOR_H
