/*
    CH-230-A
    testfraction.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include "fraction.h"
#include <iostream>

using namespace std;

int main(void)
{
    // Declare variables
    Fraction a;
    Fraction b;

    cin >> a;
    cin >> b;

    // Log the fractions
    cout << "Fraction a: " << a << endl;
    cout << "Fraction b: " << b << endl;

    // Product and Quotient
    cout << "Product: " << (a * b) << endl;
    cout << "Quotient: " << (a / b) << endl;

    // Sum and difference
    Fraction sum = a + b;
    Fraction difference = a - b;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;

    // Comparison
    cout << "The greater fraction is: " << (a > b ? a : b) << endl;
    cout << "The smaller fraction is: " << (a < b ? a : b) << endl;

    a = b;
    cout << "Setting them equal to each other makes a: " << a
         << " and b: " << b << endl;
}
