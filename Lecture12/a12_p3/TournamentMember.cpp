/*
    CH-230-A
    TournamentMember.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/
#include "TournamentMember.h"
#include <cstring>
#include <iostream>

using namespace std;

// Initialize the location
string TournamentMember::location = "Tirana, Albania";

TournamentMember::TournamentMember(const char first_name[36],
                                   const char last_name[36],
                                   const char birthday[11], int wins,
                                   int experience)
{
    cout << "Parametrized constructor invoked." << endl;

    setFirstName(first_name);
    setLastName(last_name);
    setBirthday(birthday);
    setWins(wins);
    setExperience(experience);
}

TournamentMember::TournamentMember(const TournamentMember &copy)
{
    cout << "Copy constructor invoked." << endl;

    strcpy(this->first_name, copy.first_name);
    strcpy(this->last_name, copy.last_name);
    strcpy(this->birthday, copy.birthday);

    this->wins = copy.wins;
    this->experience = copy.experience;
}

TournamentMember::TournamentMember()
    : TournamentMember("Bob", "Ross", "2000-01-01", 10, 1)
{
    cout << "Default constructor invoked." << endl;
}

TournamentMember::~TournamentMember()
{
    cout << "Class destructor invoked." << endl;
}

void TournamentMember::printInformation()
{
    cout << "-------------------------------" << endl;
    cout << "Name: " << this->first_name << " " << this->last_name << endl;
    cout << "Birthday: " << this->birthday << endl;
    cout << "Wins: " << this->wins << endl;
    cout << "Experience: " << this->experience << endl;
    cout << "Location: " << this->location << endl;
    cout << "-------------------------------" << endl;
}

Player::Player(const char first_name[36], const char last_name[36],
               const char birthday[11], int wins, int experience,
               int goals, int number, string position, bool foot)
    : TournamentMember(first_name, last_name, birthday, wins, experience)
{
    this->goals = goals;
    setFoot(foot);
    setNumber(number);
    setPosition(position);
    cout << "Player parametric constructor invoked." << endl;
}

Player::Player(const Player &player) : TournamentMember(player)
{
    this->goals = player.goals;
    this->number = player.number;
    this->position = player.position;
    cout << "Player copy constructor invoked." << endl;
}

Player::Player()
    : Player("Bob", "Ross", "1970-01-01", 10, 5, 5, 10, "Left-fielder",
             false)
{
    cout << "Player default constructor invoked." << endl;
}

Player::~Player()
{
    cout << "Player destructor invoked." << endl;
}

void Player::printPlayerInformation()
{
    printInformation();
    cout << "Goals:" << getGoals() << endl;
    cout << "Foot:" << (getFoot() ? "right-footed" : "left-footed")
         << endl;
    cout << "Position: " << this->getPosition() << endl;
    cout << "Number: " << this->getNumber() << endl;
    cout << "-------------------------------" << endl;
}