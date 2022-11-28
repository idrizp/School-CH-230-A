/*
    CH-230-A
    testbox.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include "Box.h"
#include <iostream>

int main()
{
    // Get the number of boxes
    int n;
    std::cin >> n;

    Box *boxes = new Box[2 * n];
    for (int i = 0; i < n; i++)
    {
        // Get the parameters from input
        double width, height, depth;
        std::cin >> width >> height >> depth;
        boxes[i] = Box(width, height, depth);
    }
    for (int i = n; i < 2 * n; i++)
    {
        // Use copy constructor to create a new box with the parameters of
        // the box at the original position
        boxes[i] = Box(boxes[i - n]);
    }

    for (int i = 0; i < 2 * n; i++)
    {
        // Print out the computed volume for each box.
        std::cout << boxes[i].computeVolume() << std::endl;
    }

    // Free the dynamically allocated memory
    delete[] boxes;
    return 0;
}