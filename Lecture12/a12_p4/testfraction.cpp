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
    cout << a << endl;
    cout << b << endl;

    // Product and Quotient
    cout << (a * b) << endl;
    cout << (a / b) << endl;
}
