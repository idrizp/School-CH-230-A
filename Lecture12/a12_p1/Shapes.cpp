/*
    CH-230-A
    Shapes.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/
// please refer to shapes.h for methods documentation

#include "Shapes.h"
#include <cmath>
#include <iostream>

using namespace std;

Shape::Shape(const string &n) : name(n)
{
}

string Shape::getName() const
{
    return name;
}

void Shape::setName(const string &n)
{
    this->name = n;
}

void Shape::printName() const
{
    cout << name << endl;
}

CenteredShape::CenteredShape(const string &n, double nx, double ny)
    : Shape(n)
{
    x = nx;
    y = ny;
}

void CenteredShape::move(double x, double y)
{
    this->x = x;
    this->y = y;
}

double CenteredShape::getX() const
{
    return x;
}

double CenteredShape::getY() const
{
    return y;
}

RegularPolygon::RegularPolygon(const string &n, double nx, double ny,
                               int nl)
    : CenteredShape(n, nx, ny)
{
    EdgesNumber = nl;
}

Circle::Circle(const string &n, double nx, double ny, double r)
    : CenteredShape(n, nx, ny)
{
    Radius = r;
}

// Hexagon class implementation

Hexagon::Hexagon(const string &n, double nx, double ny, double side,
                 const string &color)
    : RegularPolygon(n, nx, ny, 6)
{
    this->side = side;
    this->color = color;
}

Hexagon::~Hexagon()
{
    cout << "Hexagon destructor invoked." << endl;
}

// Copy constructor
Hexagon::Hexagon(const Hexagon &copy)
    : Hexagon(copy.getName(), copy.getX(), copy.getY(), copy.getSide(),
              copy.getColor())
{
}

// Getters and setters
string Hexagon::getColor() const
{
    return color;
}

double Hexagon::getSide() const
{
    return side;
}

void Hexagon::setColor(const std::string &color)
{
    this->color = color;
}

void Hexagon::setSide(double side)
{
    this->side = side;
}

// Area and perimeter computation methods

double Hexagon::computeArea() const
{
    return (3 * sqrt(3) / 2) * (side * side);
}

double Hexagon::computePerimeter() const
{
    return 6 * side;
}