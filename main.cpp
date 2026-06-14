#include <iostream>
#include "ComplexNumber.h"
using namespace std;

int main() {
    ComplexNumber c1;              // default
    ComplexNumber c2(3, 4);       // parameterized
    ComplexNumber c3(c2);         // copy

    c1.set(1, 2);

    ComplexNumber sum = c1 + c2;
    ComplexNumber diff = c1 - c2;
    ComplexNumber prod = c1 * c2;

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "Sum = " << sum << endl;
    cout << "Difference = " << diff << endl;
    cout << "Product = " << prod << endl;

    if (c2 == c3) {
        cout << "c2 and c3 are equal" << endl;
    }

    return 0;
}bbbbbb