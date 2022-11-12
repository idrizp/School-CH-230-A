/*
    CH-230-A
    City.h
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <iostream>

// Declaration for the City class
class City
{
    // Data members
  private:
    std::string name;
    std::string mayor;
    int population;
    int area;

    // Getters, setters
  public:
    void setName(std::string &newname);
    void setMayor(std::string &newmayor);
    void setPopulation(int newpopulation);
    void setArea(int area);

    std::string getName();
    std::string getMayor();
    int getPopulation();
    int getArea();
};