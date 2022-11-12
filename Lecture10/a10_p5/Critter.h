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
    // Set the hunger as a double
    double hunger;
    int boredom;
    double height;

  public: // business logic methods are public
          // Constructors
    Critter();
    Critter(std::string name);
    Critter(std::string name, int hunger, int boredom, double height = 10);

    // setter methods
    void setName(std::string &newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    // getter method
    int getHunger();
    // service method
    void print();
};
