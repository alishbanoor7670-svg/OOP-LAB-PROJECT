#include "ComplexNumber.h"

// Constructors
ComplexNumber::ComplexNumber() {
    real = 0;
    imag = 0;
}

ComplexNumber::ComplexNumber(double r, double i) {
    real = r;
    imag = i;
}

ComplexNumber::ComplexNumber(const ComplexNumber& c) {
    real = c.real;
    imag = c.imag;
}

// Overloaded set functions
void ComplexNumber::set(double r, double i) {
    real = r;
    imag = i;
}

void ComplexNumber::set(double r) {
    real = r;
    imag = 0;
}

void ComplexNumber::set(const ComplexNumber& c) {
    real = c.real;
    imag = c.imag;
}

// Operator Overloading
ComplexNumber ComplexNumber::operator+(const ComplexNumber& c) {
    return ComplexNumber(real + c.real, imag + c.imag);
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber& c) {
    return ComplexNumber(real - c.real, imag - c.imag);
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber& c) {
    return ComplexNumber(real * c.real - imag * c.imag,
        real * c.imag + imag * c.real);
}

bool ComplexNumber::operator==(const ComplexNumber& c) {
    return (real == c.real && imag == c.imag);
}

// Output operator
ostream& operator<<(ostream& out, const ComplexNumber& c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

