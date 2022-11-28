/*
  CH-230-A
  Vector.cpp
  Idriz Pelaj
  ipelaj@jacobs-university.de
*/

#include "Vector.h"
#include <cmath>
#include <iostream>

// Default constructor
Vector::Vector()
{
    size = 2;
    components = new double[size];
}

Vector::Vector(int size, double *components)
{
    this->size = size;
    this->components = new double[size];
    // this->components = components;
    for (int i = 0; i < size; i++)
    {
        this->components[i] = components[i];
    }
}

// Copy constructor
Vector::Vector(const Vector &v)
{
    size = v.size;
    components = new double[size];
    for (int i = 0; i < size; i++)
        components[i] = v.components[i];
}

// Destructor, delete the components array
Vector::~Vector()
{
    delete[] components;
}

// Getters
double *Vector::getComponents() const
{
    return components;
}

int Vector::getSize() const
{
    return size;
}

// Setters
void Vector::setComponents(double *c)
{
    components = c;
}

void Vector::setSize(int s)
{
    size = s;
}

// Norm of the vector
double Vector::norm()
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += (components[i] * components[i]);
    }
    return sqrt(sum);
}

// Adds a vector
Vector Vector::add(const Vector v) const
{
    Vector result;
    result.size = size;
    result.components = new double[size];
    for (int i = 0; i < size; i++)
    {
        result.components[i] = components[i] + v.components[i];
    }
    return result;
}

// Subtracts a vector
Vector Vector::difference(const Vector v) const
{
    Vector result;
    result.size = size;
    result.components = new double[size];
    for (int i = 0; i < size; i++)
    {
        result.components[i] = components[i] - v.components[i];
    }
    return result;
}

// Scalar multiplication method
double Vector::scalarMultiply(const Vector v) const
{
    double sum = 0.0;
    for (int i = 0; i < size; i++)
    {
        sum += components[i] * v.components[i];
    }
    return sum;
}

// Print the vector
void Vector::printVector()
{
    for (int i = 0; i < size; i++)
    {
        std::cout << components[i] << " ";
    }
    std::cout << std::endl;
}