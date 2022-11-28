/*
  CH-230-A
  testshapes.cpp
  Idriz Pelaj
  ipelaj@jacobs-university.de
*/

#include "Shapes.h"
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    Circle c;
    Rectangle r;
    Square s;

    cout << "The circle area is " << c.area() << endl;
    cout << "The rectangle area is " << r.area() << endl;
    cout << "The square area is " << s.area() << endl;

    cout << "The circle perimeter is " << c.perimeter() << endl;
    cout << "The rectangle perimeter is " << r.perimeter() << endl;
    cout << "The square perimeter is " << s.perimeter() << endl;
}
