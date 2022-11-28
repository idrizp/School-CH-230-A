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
const int num_obj = 25;
const char *colors[] = {"RED", "BLACK", "VIOLET", "BLUE"};
int main()
{
    Area *list[num_obj];
    srand((unsigned)time(NULL));
    double sum_area =
        0.0; // (3) The sum of the areas will be printed at the end.
    double sum_perimeter = 0.0;
    for (int i = 0; i < num_obj; i++)
    {
        // Generate a random color index
        int color_index = rand() % 4;
        // A shape index that determines what type of shape we'll have
        int shape_index = rand() % 4;
        const char *color = colors[color_index];

        // Use switch-cases to determine the shape type, RNG attributes for
        // each type
        switch (shape_index)
        {
        case 0: {
            int radius = (rand() % 96) + 1;
            list[i] = new Circle(color, radius);
            break;
        }
        case 1: {
            int inner_radius = (rand() % 96) + 1;
            int outer_radius = (rand() % 96) + 1;
            list[i] = new Ring(color, outer_radius, inner_radius);
            break;
        }
        case 2: {
            int length = (rand() % 96) + 1;
            int width = (rand() % 96) + 1;
            list[i] = new Rectangle(color, length, width);
            break;
        }
        case 3: {
            int side = (rand() % 96) + 1;
            list[i] = new Square(color, side);
            break;
        }
        default:
            break;
        }
    }

    for (int i = 0; i < num_obj; i++)
    {
        cout << list[i]->calcArea() << endl;
        cout << list[i]->calcPerimeter() << endl;

        sum_area += list[i]->calcArea();
        sum_perimeter += list[i]->calcPerimeter();
    }
    cout << "\nThe total area is " << sum_area << " units "
         << endl; // (9) The total sum is printed out.

    // Print the perimeter.
    cout << "\nThe total perimeter is " << sum_perimeter << " units"
         << endl;
    return 0;
}
