/*
    CH-230-A
    Ring.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include "Ring.h"
#include <cmath>
#include <iostream>

Ring::Ring(const char *n, double outer, double inner) : Circle(n, outer)
{
    innerradius = inner;
}

Ring::~Ring()
{
}

double Ring::calcArea() const
{
    std::cout << "calcArea of Ring...";
    return (Circle::calcArea() - (innerradius * innerradius * M_PI));
}

double Ring::calcPerimeter() const
{
    // Calculates the perimeter of the ring.
    std::cout << "calcPerimeter of Ring...";
    return (Circle::calcPerimeter() + (2 * M_PI * innerradius));
}