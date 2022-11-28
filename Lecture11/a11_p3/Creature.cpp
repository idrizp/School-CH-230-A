/*
  CH-230-A
  Creature.cpp
  Idriz Pelaj
  ipelaj@jacobs-university.de
*/

#include "Creature.h"
#include <iostream>

using namespace std;

// Creature implementation
Creature::Creature() : distance(10)
{
    cout << "Creature constructor called." << endl;
}

Creature::~Creature()
{
    cout << "Called Creature destructor." << endl;
}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

// Wizard implementation
Wizard::Wizard() : distFactor(3)
{
    cout << "Wizard constructor called." << endl;
}

Wizard::~Wizard()
{
    cout << "Wizard destructor called." << endl;
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

// Fly implementation
Fly::Fly() : soundDecibels(50)
{
    cout << "Fly constructor called." << endl;
}

Fly::~Fly()
{
    cout << "Fly destructor called." << endl;
}

void Fly::fly() const
{
    cout << "Flying at a distance of " << distance
         << "m and making a noise of " << soundDecibels << " decibels!";
}

// Dog implementation
Dog::Dog() : fluffy(true)
{
    cout << "Dog constructor called." << endl;
}

Dog::~Dog()
{
    cout << "Dog destructor called." << endl;
}

void Dog::bark() const
{
    cout << "A " << (fluffy ? "fluffy" : "not so fluffy ")
         << " dog is barking at a distance of " << distance << "m!"
         << endl;
}