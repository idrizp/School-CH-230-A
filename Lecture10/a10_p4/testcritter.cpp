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
    Critter critter_one;
    std::string name = "Bob";
    critter_one.setName(name);
    critter_one.setHunger(2);
    critter_one.print();

    Critter critter_two("Ross");
    critter_two.setHunger(2);
    critter_two.print();

    Critter critter_three("Painter", 2, 4, 10);
    critter_three.print();

    Critter critter_four("Returns", 2, 4);
    critter_four.print();
    return 0;
}
