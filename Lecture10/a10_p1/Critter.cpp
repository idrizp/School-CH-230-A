/*
    CH-230-A
    Critter.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/
#include "Critter.h"
#include <iostream>

using namespace std;

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
    cout << "I am " << name << ". My hunger level is " << hunger << "."
         << endl;
}

int Critter::getHunger()
{
    return hunger;
}
