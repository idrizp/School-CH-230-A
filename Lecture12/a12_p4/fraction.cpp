/*
    CH-230-A
    fraction.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include "fraction.h"
#include <iostream>

Fraction::Fraction()
{
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d)
{
    int tmp_gcd = gcd(n, d);

    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
    int tmp_gcd = 1;

    // Implement GCD of two numbers;

    return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

std::ostream &operator<<(std::ostream &os, const Fraction &f)
{
    os << f.num << "/" << f.den;
    return os;
}

Fraction Fraction::operator/(const Fraction &f)
{
    return Fraction(num * f.den, den * f.num);
}
Fraction Fraction::operator*(const Fraction &f)
{
    return Fraction(f.num * num, f.den * den);
}

std::istream &operator>>(std::istream &is, Fraction &f)
{
    is >> f.num;
    is >> f.den;
    return is;
}