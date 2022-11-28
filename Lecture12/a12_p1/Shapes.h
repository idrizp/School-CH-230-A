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

    std::string getName() const; // getter for name

    void printName() const;            // prints the name
    void setName(const std::string &); // sets the name
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
};

class RegularPolygon : public CenteredShape
{ // a regular polygon is a centered_shape with a number of edges
  private:
    int EdgesNumber;

  public:
    RegularPolygon(const std::string &, double, double, int);
    RegularPolygon();
    RegularPolygon(const RegularPolygon &);

    int getEdgesNumber() const;
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

    double getRadius() const;
    void setRadius(double newRadius);
};

class Hexagon : public RegularPolygon
{
  private:
    double side;
    std::string color;

  public:
    Hexagon(const std::string &, double, double, double,
            const std::string &);
    Hexagon(const Hexagon &);
    ~Hexagon();

    double getSide() const;
    void setSide(double side);

    std::string getColor() const;
    void setColor(const std::string &);

    double computePerimeter() const;
    double computeArea() const;
};

#endif
