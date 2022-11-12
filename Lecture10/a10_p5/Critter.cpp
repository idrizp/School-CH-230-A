/*
    CH-230-A
    Critter.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include "Critter.h"
#include <iostream>

using namespace std;

// Constructors
Critter::Critter()
{
    name = "default_critter";
    hunger = 0;
    boredom = 0;
    height = 10;
}

Critter::Critter(string name)
{
    this->name = name;
    hunger = 0;
    boredom = 0;
    height = 10;
}

Critter::Critter(string name, int hunger, int boredom, double height)
{
    this->name = name;
    this->hunger = hunger;
    this->boredom = boredom;
    this->height = height;
}

void Critter::setName(string &newname)
{
    name = newname;
}

void Critter::setHunger(int newhunger)
{
    // Update the hunger as a double
    hunger = newhunger / 10;
}

void Critter::print()
{
    cout << "I am " << name << ". My hunger level is " << hunger
         << ". I have a height of " << height << endl;
}

int Critter::getHunger()
{
    // Return the hunger as an int
    return (hunger * 10);
}
