/*
    CH-230-A
    TournamentMember.h
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/
#ifndef _TOURNAMENT_MEMBER_H
#define _TOURNAMENT_MEMBER_H
#include <cstring>
#include <iostream>
using namespace std;

class TournamentMember
{

  private:
    // Static data member
    static string location;

    // Data members
    char first_name[36];
    char last_name[36];
    char birthday[11];
    int wins;
    int experience;

  public:
    // Constructors
    TournamentMember();
    TournamentMember(const char[36], const char[36], const char[11], int,
                     int);
    TournamentMember(const TournamentMember &);

    // Destructor
    ~TournamentMember();

    // Getters
    inline char *getFirstName()
    {
        return first_name;
    }
    inline char *getLastName()
    {
        return last_name;
    }

    inline char *getBirthday()
    {
        return birthday;
    }

    inline int getWins()
    {
        return wins;
    }

    inline int getExperience()
    {
        return experience;
    }

    inline string getLocation()
    {
        return location;
    }

    // Setters
    inline void setFirstName(const char first_name[36])
    {
        strcpy(this->first_name, first_name);
    }

    inline void setLastName(const char last_name[36])
    {
        strcpy(this->last_name, last_name);
    }
    inline void setBirthday(const char birthday[11])
    {
        strcpy(this->birthday, birthday);
    }
    inline void setWins(int wins)
    {
        this->wins = wins;
    }

    inline void setExperience(int experience)
    {
        this->experience = experience;
    }

    inline static void setLocation(const string &location)
    {
        TournamentMember::location = location;
    }

    // Print Information
    void printInformation();
};

class Player : public TournamentMember
{
  private:
    int goals;
    int number;
    string position;
    bool foot;

  public:
    Player(const char[36], const char[36], const char[11], int, int, int,
           int, string, bool foot);
    Player(const Player &);
    Player();
    ~Player();

    inline int getGoals()
    {
        return goals;
    }

    inline bool getFoot()
    {
        return foot;
    }

    inline bool isLeftFooted()
    {
        return !foot;
    }

    inline bool isRightFooted()
    {
        return foot;
    }

    inline int getNumber()
    {
        return number;
    }

    inline string getPosition()
    {
        return position;
    }

    inline void setNumber(int number)
    {
        this->number = number;
    }

    inline void setFoot(bool foot)
    {
        this->foot = foot;
    }

    inline void setPosition(const string &position)
    {
        this->position = position;
    }
    void scoreGoal();
    void printPlayerInformation();
};

#endif