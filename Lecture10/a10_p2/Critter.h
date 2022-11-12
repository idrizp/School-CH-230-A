/*
    CH-230-A
    Critter.h
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
  private: // data members are private
    std::string name;
    int hunger;
    int boredom;
    double height;
    int health;
    std::string personality;

  public: // business logic methods are public
    // setter methods
    void setName(std::string &newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);

    // New properties - personality, health, and their respective setters
    // and getters
    void setPersonality(std::string &personality);
    void setHealth(int newhealth);

    int getHealth();
    std::string getPersonality();

    // getter method
    int getHunger();

    // service method
    void print();
};
