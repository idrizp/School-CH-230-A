/*
    CH-230-A
    testcomplex.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include "Complex.h"
#include <iostream>

using namespace std;

int main()
{
    // Program to test the Complex class

    float c1_real, c2_real, c1_imag, c2_imag;
    cin >> c1_real >> c1_imag >> c2_real >> c2_imag;

    Complex c1 = Complex(c1_real, c1_imag);
    Complex c2 = Complex(c2_real, c2_imag);
    Complex c3;

    c1.print();
    c2.print();

    // Print the conjugate of c1
    c1.conjugate().print();

    // Print the sum of c1 and c2
    c3 = c1.add(c2);
    c3.print();

    // Print the subtract of c1 and c2
    c3 = c1.subtract(c2);
    c3.print();
    return 0;
}
