/*
    CH-230-A
    testcritter.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include "Critter.h"
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    Critter c;

    string name;
    int hunger;

    // Add variables for the personality and health of a critter
    string personality;
    int health;

    cout << endl << "Please enter data: " << endl;
    cout << "Name: ";
    // cin >> name; will not work if name contains
    // spaces
    getline(cin, name);
    c.setName(name);
    cout << "Hunger: ";
    cin >> hunger;
    c.setHunger(hunger);

    // Get the personality and health of the critter
    cout << "Health: ";
    cin >> health;
    c.setHealth(health);

    cout << "Personality: ";
    getline(cin >> ws, personality);
    c.setPersonality(personality);

    cout << "You have created:" << endl;
    c.print();
    return 0;
}
