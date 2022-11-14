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
    hunger = newhunger;
}

void Critter::print()
{
    cout << "I am " << name << ". My hunger level is " << hunger
         << ". I have a height of " << height << endl;
}

int Critter::getHunger()
{
    return hunger;
}
