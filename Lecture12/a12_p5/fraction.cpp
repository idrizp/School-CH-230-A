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
    // Absolute values for the GCD. The GCD is the same regardless of
    // negative or positive numbers.
    a = abs(a);
    b = abs(b);
    // GCD algorithm. Two base cases.
    if (a == 0 || b == 0)
        return 0;
    else if (a == b)
        return a;
    else if (a > b)
        return gcd(a - b, b);
    else
        return gcd(a, b - a);
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

Fraction Fraction::operator=(const Fraction &f)
{
    den = f.den;
    num = f.num;
    return *this;
}

Fraction Fraction::operator/(const Fraction &f)
{
    return Fraction(num * f.den, den * f.num);
}
Fraction Fraction::operator*(const Fraction &f)
{
    return Fraction(f.num * num, f.den * den);
}
Fraction Fraction::operator+(const Fraction &f)
{
    int a = num, b = den;
    int c = f.num, d = f.den;
    int res_lcm = lcm(b, d);

    int new_num = a * res_lcm / b + c * res_lcm / d;
    return Fraction(new_num, res_lcm);
}
Fraction Fraction::operator-(const Fraction &f)
{
    int a = num, b = den;
    int c = f.num, d = f.den;
    int res_lcm = lcm(b, d);

    int new_num = a * res_lcm / b - c * res_lcm / d;
    return Fraction(new_num, res_lcm);
}
bool Fraction::operator<(const Fraction &f)
{
    double first_as_dec = ((double)num) / den;
    double second_as_dec = ((double)f.num) / f.den;

    return first_as_dec < second_as_dec;
}
bool Fraction::operator>(const Fraction &f)
{
    return !(*this < f);
}
std::istream &operator>>(std::istream &is, Fraction &f)
{
    is >> f.num;
    is >> f.den;
    return is;
}