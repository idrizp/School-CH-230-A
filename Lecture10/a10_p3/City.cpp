/*
    CH-230-A
    City.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include "City.h"
#include <iostream>

// Implement getters and setters for the City class

int City::getArea()
{
    return area;
}

std::string City::getName()
{
    return name;
}

int City::getPopulation()
{
    return population;
}

std::string City::getMayor()
{
    return mayor;
}

void City::setArea(int newarea)
{
    area = newarea;
}

void City::setName(std::string &newname)
{
    name = newname;
}

void City::setMayor(std::string &newmayor)
{
    mayor = newmayor;
}

void City::setPopulation(int newpopulation)
{
    population = newpopulation;
}