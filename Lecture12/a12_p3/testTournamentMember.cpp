/*
    CH-230-A
    testTournamentMember.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/
#include "TournamentMember.h"
#include <cstring>
#include <iostream>

int main()
{
    // All constructor permutations
    TournamentMember t1;
    t1.printInformation();

    TournamentMember t2(t1);
    TournamentMember::setLocation("Prishtina, Kosovo");
    t2.printInformation();

    TournamentMember t3("John", "Doe", "2001-01-01", 10, 10);
    t3.printInformation();
    return 0;
}