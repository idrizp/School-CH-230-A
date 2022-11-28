/*
    CH-230-A
    Circle.h
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#ifndef _CIRCLE_H
#define _CIRCLE_H
#include "Area.h"

class Circle : public Area
{
  public:
    Circle(const char *n, double a);
    ~Circle();
    double calcPerimeter() const;
    double calcArea() const;

  private:
    double radius;
};

#endif
