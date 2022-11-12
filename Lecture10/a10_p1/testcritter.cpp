/*
    CH-230-A
    testcritter.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

/*

explanations.txt -

a) We get an undeclared identifier error. By removing "using namespace
std", we no longer bring in the standard library namespace into the global
scope. An alternative to using namespace std would simply be to explicitly
prefix each statement that uses declarations from the std namespace with
std::, I.E std::endl, std::cout, etc.

b) We get the use of an undeclared identifier error on the data member of
the class. When removing the class name's prefix, you can not access the
object's data members. Potential alternative solutions would be to provide
the object itself to the setHunger method, for example, and making the data
member public, which would go against best practices, but would work.



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

    cout << endl << "Please enter data: " << endl;
    cout << "Name: ";
    // cin >> name; will not work if name contains
    // spaces
    getline(cin, name);
    c.setName(name);
    cout << "Hunger: ";
    cin >> hunger;
    c.setHunger(hunger);

    cout << "You have created:" << endl;
    c.print();
    return 0;
}
