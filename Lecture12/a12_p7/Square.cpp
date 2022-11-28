/*
    CH-230-A
    Square.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include "Square.h"
#include "Rectangle.h"
#include <iostream>

Square::Square(const char *n, double a) : Rectangle(n, a, a)
{
    side = a;
}

Square::~Square()
{
}

double Square::calcArea() const
{
    std::cout << "calcArea of Square...";
    return side * side;
}

double Square::calcPerimeter() const
{
    std::cout << "calcPerimeter of Square...";
    return 4 * side;
}
