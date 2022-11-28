/*
    CH-230-A
    Area.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include "Area.h"
#include <cstring>
#include <iostream>
using namespace std;

Area::Area(const char *n)
{
    strncpy(color, n, 10);
    cout << "Area constructor being called...\n";
}

Area::~Area()
{
}

void Area::getColor() const
{
    cout << "\n" << color << ": ";
}
