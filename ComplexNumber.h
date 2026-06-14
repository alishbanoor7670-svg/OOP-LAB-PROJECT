#ifndef COMPLEXNUMBER_H
#define COMPLEXNUMBER_H

#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double real;
    double imag;

public:
    // 1. Function Overloading (Constructors)
    ComplexNumber();                         // Default constructor
    ComplexNumber(double r, double i);       // Parameterized constructor
    ComplexNumber(const ComplexNumber& c);   // Copy constructor

    // Overloaded functions (same name, different parameters)
    void set(double r, double i);
    void set(double r);
    void set(const ComplexNumber& c);

    // Operator Overloading
    ComplexNumber operator+(const ComplexNumber& c);
    ComplexNumber operator-(const ComplexNumber& c);
    ComplexNumber operator*(const ComplexNumber& c);

    bool operator==(const ComplexNumber& c);

    // Friend function for output
    friend ostream& operator<<(ostream& out, const ComplexNumber& c);
};

#endif