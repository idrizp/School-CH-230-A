/*
    CH-230-A
    testvirtual.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Ring.h"
#include "Square.h"

/*
            Area
            /  \
    Rectangle   Circle
    /                 \
Square               Ring


*/
const int num_obj = 7;
int main()
{
    Area *
        list[num_obj]; // (1) An array of "Area" object pointers is
                       // being created with a size of num_objects, so six.
    int index = 0;     // (2) The index starts at zero.
    double sum_area =
        0.0; // (3) The sum of the areas will be printed at the end.
    double sum_perimeter = 0.0;

    cout << "Creating Ring: ";
    Ring blue_ring("BLUE", 5,
                   2); // (4) A new ring is created with the color blue,
                       // the outer radius is declared as five and the
                       // inner radius is declared as 2.
    cout << "Creating Circle: ";
    Circle yellow_circle("YELLOW", 7);
    cout << "Creating Rectangle: ";
    Rectangle green_rectangle("GREEN", 5, 6);
    cout << "Creating Circle: ";
    Circle red_circle("RED", 8);
    cout << "Creating Rectangle: ";
    Rectangle black_rectangle("BLACK", 10, 20);
    cout << "Creating Ring: ";
    Ring violet_ring("VIOLET", 100, 5);
    cout << "Creating Square:";
    Square white_square("WHITE", 10);
    list[0] = &blue_ring; // (5) The first index of the list of pointers is
                          // being populated with a reference to the blue
                          // ring, this is possible due to polymorphism.
    list[1] = &yellow_circle;
    list[2] = &green_rectangle;
    list[3] = &red_circle;
    list[4] = &black_rectangle;
    list[5] = &violet_ring;
    list[6] = &white_square;
    while (index < num_obj)
    { // (7) Looping through each of the elements in the list.
        (list[index])->getColor();
        double area =
            list[index]->calcArea(); // (8) The area of the index is
                                     // calculated and summed up, then
                                     // the index is incremented.
        double perimeter = list[index]->calcPerimeter();
        sum_area += area;
        sum_perimeter += perimeter;
        index++;
    }
    cout << "\nThe total area is " << sum_area << " units "
         << endl; // (9) The total sum is printed out.

    // Print the perimeter.
    cout << "\nThe total perimeter is " << sum_perimeter << " units"
         << endl;
    return 0;
}
