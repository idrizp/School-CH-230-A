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
    // Update thirst to be the same as the hunger
    thirst = hunger;
}

Critter::Critter(string name)
{
    this->name = name;
    hunger = 0;
    boredom = 0;
    height = 10;
    // Update thirst to be the same as the hunger
    thirst = hunger;
}

Critter::Critter(string name, int hunger, int boredom, double height)
{
    this->name = name;
    this->hunger = hunger;
    this->boredom = boredom;
    this->height = height;
    // Update thirst to be the same as the hunger
    this->thirst = hunger;
}

void Critter::setName(string &newname)
{
    name = newname;
}

void Critter::setHunger(int newhunger)
{
    hunger = newhunger / 10;
}

void Critter::print()
{
    // Print out the thirst as well
    cout << "I am " << name << ". My hunger level is " << hunger
         << ". I have a height of " << height << " and a thirst of "
         << thirst << endl;
}

int Critter::getHunger()
{
    return (hunger * 10);
}
