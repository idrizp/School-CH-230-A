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
    double hunger;
    int boredom;
    // Properties for thirst and height
    double height;
    double thirst;

  public: // business logic methods are public
          // Constructors
    Critter();
    Critter(std::string name);
    Critter(std::string name, int hunger, int boredom, double height = 10);
    Critter(std::string name, int hunger, int boredom, double height,
            double thirst);

    // setter methods
    void setName(std::string &newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setThirst(double newthirst);
    // getter method
    int getHunger();
    double getThirst();
    // service method
    void print();
};
