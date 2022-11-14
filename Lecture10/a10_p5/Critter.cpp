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
    cout << "Called default constructor" << endl;
    name = "default_critter";
    // We use the setter so we can change the internal implementation of
    // the setHunger method later on.
    setHunger(2);
    boredom = 0;
    height = 10;
}

Critter::Critter(string name)
{
    cout << "Called name-only constructor" << endl;
    this->name = name;
    setHunger(2);
    boredom = 0;
    height = 10;
}

Critter::Critter(string name, int hunger, int boredom, double height)
{
    cout << "Called hunger, boredom, and height constructor" << endl;
    this->name = name;
    setHunger(hunger);
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
    hunger = newhunger / 10.0;
}

void Critter::print()
{
    // Log hunger level as a percentage integer
    cout << "I am " << name << ". My hunger level is " << getHunger()
         << "%. I have a height of " << height << endl;
}

int Critter::getHunger()
{
    // Return the hunger as an int
    return (hunger * 10);
}
