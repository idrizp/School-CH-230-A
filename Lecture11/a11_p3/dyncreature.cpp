/*
  CH-230-A
  dyncreature.cpp
  Idriz Pelaj
  ipelaj@jacobs-university.de
*/

#include "Creature.h"
#include <iostream>

using namespace std;

int main()
{
    do
    {
        std::string argument;
        getline(cin, argument);
        // Create a creature corresponding to the user input
        if (argument == "wizard")
        {
            // Create a wizard, delete after use
            const Wizard *wizard = new Wizard();
            wizard->run();
            wizard->hover();
            delete wizard;
        }
        else if (argument == "dog")
        {
            // Create a dog, delete after use
            const Dog *dog = new Dog();
            dog->run();
            dog->bark();
            delete dog;
        }
        else if (argument == "fly")
        {
            // Create a fly, delete after use
            const Fly *fly = new Fly();
            fly->run();
            fly->fly();
            delete fly;
        }
        else if (argument == "quit")
        {
            // If the argument is quit, exit the program
            break;
        }
    } while (true);
    return 0;
}