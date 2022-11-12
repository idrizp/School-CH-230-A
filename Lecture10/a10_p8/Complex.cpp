/*
    CH-230-A
    Complex.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include "Complex.h"
#include <cmath> //needed for sqrt
#include <iostream>

using namespace std; // for cout

Complex::Complex()
{ // sets everything to 0
    real = imag = 0;
    cout << "Constructor one is being called" << endl;
}
Complex::Complex(float r, float i)
{             // initializes it to a given couple.
              // Please note that here it is
    real = r; // not necessary to replicate the default value for the
              // second parameter
    imag = i;
    cout << "Constructor two is being called" << endl;
}

Complex::Complex(const Complex &c)
{
    real = c.real;
    imag = c.imag;
    cout << "Copy constructor is being called" << endl;
}

Complex::~Complex()
{
    cout << "Destructor is being called" << endl;
}

double Complex::magnitude()
{ // computes the magnitude.
  // Note that we can use freely C standard
  // functions like sqrt
    return sqrt(real * real + imag * imag);
}

void Complex::print()
{ // prints data to screen via cout
    if (imag)
    {
        cout << noshowpos << real << showpos << imag << "i" << endl;
    }
    else
    {
        cout << noshowpos << real << showpos << endl;
    }
}

// Implement the add, subtract, conjugate, and multiply functions
Complex Complex::add(Complex c)
{
    // Adds two complex numbers
    Complex result;
    result.real = real + c.real;
    result.imag = imag + c.imag;
    return result;
}

Complex Complex::subtract(Complex c)
{
    // Subtracts two complex numbers
    Complex result;
    result.real = real - c.real;
    result.imag = imag - c.imag;
    return result;
}

Complex Complex::conjugate()
{
    // Finds the conjugate of the complex number
    Complex result;
    result.real = real;
    result.imag = -imag;
    return result;
}

// Multiplication function for complex numbers
Complex Complex::multiply(Complex c)
{
    Complex result;
    result.real = real * c.real - imag * c.imag;
    result.imag = real * c.imag + imag * c.real;
    return result;
}