/*
    CH-230-A
    Box.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include "Box.h"
#include <iostream>

// Constructor implementations
Box::Box()
{
    width = 1.0;
    height = 1.0;
    depth = 1.0;
}

Box::Box(double width, double height, double depth)
{
    this->width = width;
    this->height = height;
    this->depth = depth;
}

Box::Box(const Box &box)
{
    this->width = box.width;
    this->height = box.height;
    this->depth = box.depth;
}

Box::~Box()
{
    // Log when the destructor is called
    std::cout << "Destructor called" << std::endl;
}

// Setter implementations
void Box::setWidth(double width)
{
    this->width = width;
}

void Box::setHeight(double height)
{
    this->height = height;
}

void Box::setDepth(double depth)
{
    this->depth = depth;
}

// Getter implementations
double Box::getWidth()
{
    return width;
}

double Box::getHeight()
{
    return height;
}

double Box::getDepth()
{
    return depth;
}

// Compute volume method
double Box::computeVolume()
{
    return width * height * depth;
}