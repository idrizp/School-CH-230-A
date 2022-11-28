/*
  CH-230-A
  Shapes.cpp
  Idriz Pelaj
  ipelaj@jacobs-university.de
*/
// please refer to shapes.h for methods documentation

#include "Shapes.h"
#include <iostream>

using namespace std;

Shape::Shape(const string &n) : name(n)
{
}

void Shape::setName(const string &n)
{
    name = n;
}

Shape::Shape() : Shape("Foo")
{
}

string Shape::getName() const
{
    return name;
}

void Shape::printName() const
{
    cout << name << endl;
}

// Constructor for CenteredShape
CenteredShape::CenteredShape(const string &n, double nx, double ny)
    : Shape(n)
{
    x = nx;
    y = ny;
}

void CenteredShape::setX(double x)
{
    this->x = x;
}

void CenteredShape::setY(double y)
{
    this->y = y;
}

CenteredShape::CenteredShape() : CenteredShape("Foo", 0, 0)
{
}

double CenteredShape::getX() const
{
    return x;
}

double CenteredShape::getY() const
{
    return y;
}

// Constructor for RegularPolygon
RegularPolygon::RegularPolygon(const string &n, double nx, double ny,
                               int nl)
    : CenteredShape(n, nx, ny)
{
    EdgesNumber = nl;
}

RegularPolygon::RegularPolygon() : RegularPolygon("Foo", 0, 0, 0)
{
}

int RegularPolygon::getEdgesNumber()
{
    return EdgesNumber;
}

void RegularPolygon::setEdgesNumber(int edgesNumber)
{
    EdgesNumber = edgesNumber;
}

// Constructor for Circle
Circle::Circle(const string &n, double nx, double ny, double r)
    : CenteredShape(n, nx, ny)
{
    Radius = r;
}

Circle::Circle() : Circle("Foo", 0, 0, 1)
{
}

double Circle::getRadius()
{
    return Radius;
}

void Circle::setRadius(double radius)
{
    Radius = radius;
}

// Implementation of constructor for rectangle
Rectangle::Rectangle(const string &n, double nx, double ny, double nwidth,
                     double nheight)
    : RegularPolygon(n, nx, ny, 4)
{
    width = nwidth;
    height = nheight;
}

Rectangle::Rectangle() : Rectangle("Foo", 0, 0, 2, 1)
{
}

double Rectangle::getWidth() const
{
    return width;
}

double Rectangle::getHeight() const
{
    return height;
}

void Rectangle::setWidth(double width)
{
    this->width = width;
}

void Rectangle::setHeight(double height)
{
    this->height = height;
}

// Implementation of constructor for square
Square::Square(const string &n, double nx, double ny, double nside)
    : Rectangle(n, nx, ny, nside, nside)
{
}

Square::Square() : Square("Foo", 0, 0, 1)
{
}

Square::Square(const Square &s)
    : Square(s.getName(), s.getX(), s.getY(), s.getWidth())
{
}

// Implementation of area and perimeter functions

double Circle::area()
{
    return 3.14 * (getRadius() * getRadius());
}

double Circle::perimeter()
{
    return 2 * 3.14 * getRadius();
}

double Rectangle::area()
{
    return getWidth() * getHeight();
}

double Rectangle::perimeter()
{
    return 2 * (getWidth() + getHeight());
}

double Square::area()
{
    return getWidth() * getWidth();
}

double Square::perimeter()
{
    return 4 * getWidth();
}