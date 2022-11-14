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
    setHunger(2);
    boredom = 0;
    thirst = hunger;
    height = 10;
}

Critter::Critter(string name)
{
    cout << "Called name-only constructor" << endl;
    this->name = name;
    setHunger(2);
    thirst = hunger;
    boredom = 0;
    height = 10;
}

Critter::Critter(string name, int hunger, int boredom, double height)
{
    cout << "Called name, hunger, boredom, and height constructor" << endl;
    this->name = name;
    // Use the setter so we can do the conversion in the constructor.
    setHunger(hunger);
    thirst = this->hunger;
    this->boredom = boredom;
    this->height = height;
}

Critter::Critter(string name, int hunger, int boredom, double height,
                 double thirst)
{
    cout << "Called name, hunger, boredom, height, and thirst constructor"
         << endl;
    this->name = name;
    // Use the setter so we can do the conversion in the constructor.
    setHunger(hunger);
    this->thirst = thirst;
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
    // Log the hunger level as a percentage integer
    cout << "I am " << name << ". My hunger level is " << getHunger()
         << "%. I have a height of " << height
         << " and my thirst level is " << getThirst() << endl;
}

int Critter::getHunger()
{
    // Return the hunger as an int
    return (hunger * 10);
}

// Properties for the thirst.

void Critter::setThirst(double newthirst)
{
    thirst = newthirst;
}

double Critter::getThirst()
{
    return thirst;
}
