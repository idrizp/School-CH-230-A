/*
     CH-230-A
     testHexagon.cpp
     Idriz Pelaj
     ipelaj@jacobs-university.de
*/

#include "Shapes.h"
#include <iostream>

using namespace std;

int main()
{
    // Create hexagons, print out the perimeter and area
    Hexagon h1("Bob", 0, 0, 9, "blue");
    Hexagon h2("Ross", 0, 0, 16, "green");
    Hexagon h3(h2);

    cout << "The area of h1: " << h1.computeArea()
         << ", perimeter: " << h1.computePerimeter() << endl;

    cout << "The area of h2: " << h2.computeArea()
         << ", perimeter: " << h2.computePerimeter() << endl;

    cout << "The area of h3: " << h3.computeArea()
         << ", perimeter: " << h3.computePerimeter() << endl;

    return 0;
}