/*
    CH-230-A
    testcity.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include "City.h"
#include <iostream>

int main()
{
    // Definition for bremen
    City bremen;

    std::string name = "Bremen";
    std::string mayor = "Carsten Sieling";
    int population = 550000;
    int area = 419;

    bremen.setName(name);
    bremen.setMayor(mayor);
    bremen.setPopulation(population);
    bremen.setArea(area);

    // Definition for paris
    City paris;
    name = "Paris";
    mayor = "Anne Hidalgo";
    population = 2200000;
    area = 105;

    paris.setName(name);
    paris.setMayor(mayor);
    paris.setPopulation(population);
    paris.setArea(area);

    // Definition for london
    City london;
    name = "London";
    mayor = "Sadiq Khan";
    population = 8900000;
    area = 1572;

    london.setName(name);
    london.setMayor(mayor);
    london.setPopulation(population);
    london.setArea(area);
    return 0;
}