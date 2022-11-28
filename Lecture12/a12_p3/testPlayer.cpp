/*
    CH-230-A
    testPlayer.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/
#include "TournamentMember.h"
#include <cstring>
#include <iostream>

int main()
{
    // All constructor permutations
    Player p1;
    p1.printPlayerInformation();

    Player p2(p1);
    Player::setLocation("Hamburg");
    p2.printPlayerInformation();

    Player p3("John", "Doe", "1984-01-01", 10, 10, 5, 10, "Right-fielder",
              true);
    p3.printPlayerInformation();
    return 0;
}