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

void Critter::setPersonality(string &newpersonality)
{
    personality = newpersonality;
}

void Critter::setHunger(int newhunger)
{
    hunger = newhunger;
}

void Critter::setHealth(int newhealth)
{
    health = newhealth;
}

void Critter::print()
{
    cout << "I am " << name << ". My hunger level is " << hunger
         << ". My personality is " << personality << " and my health is "
         << health << endl;
}

// Implements the personality getter for the critter.
string Critter::getPersonality()
{
    return personality;
}

// Implements the health getter for the critter.
int Critter::getHealth()
{
    return health;
}

int Critter::getHunger()
{
    return hunger;
}
