/*
  CH-230-A
  Shapes.h
  Idriz Pelaj
  ipelaj@jacobs-university.de
*/
/*
    Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape
{                     // base class
  private:            // private access modifier: could also be protected
    std::string name; // every shape will have a name
  public:
    Shape(const std::string &); // builds a shape with a name
    Shape();                    // empty shape
    Shape(const Shape &);       // copy constructor
    void printName() const;     // prints the name

    std::string getName() const;
    void setName(const std::string &);
};

class CenteredShape : public Shape
{ // inherits from Shape
  private:
    double x, y; // the center of the shape
  public:
    CenteredShape(const std::string &, double,
                  double); // usual three constructors
    CenteredShape();
    CenteredShape(const CenteredShape &);
    void move(double,
              double); // moves the shape, i.e. it modifies it center

    double getX() const;
    double getY() const;

    void setX(double x);
    void setY(double y);
};

class RegularPolygon : public CenteredShape
{ // a regular polygon is a centered_shape with a number of edges
  private:
    int EdgesNumber;

  public:
    RegularPolygon(const std::string &, double, double, int);
    RegularPolygon();
    RegularPolygon(const RegularPolygon &);
    int getEdgesNumber();
    void setEdgesNumber(int edgesNumber);
};

class Circle : public CenteredShape
{ // a Circle is a shape with a center and a radius
  private:
    double Radius;

  public:
    Circle(const std::string &, double, double, double);
    Circle();
    Circle(const Circle &);

    double getRadius();
    void setRadius(double newRadius);

    // Area and Perimeter functions
    double area();
    double perimeter();
};

// Define the rectangle class.
class Rectangle : public RegularPolygon
{
  private:
    double width, height;

  public:
    Rectangle();
    Rectangle(const std::string &, double, double, double, double);
    Rectangle(const Rectangle &);
    double getWidth() const;
    double getHeight() const;

    void setWidth(double width);
    void setHeight(double height);

    // Area and Perimeter functions
    double area();
    double perimeter();
};

// Define the square class.
class Square : public Rectangle
{
  private:
    double side;

  public:
    Square();
    Square(const std::string &, double, double, double);
    Square(const Square &);

    double getSide();
    void setSide(double side);

    // Area and Perimeter functions
    double area();
    double perimeter();
};

#endif
