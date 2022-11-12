/*
    CH-230-A
    a9_p5.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/
#include <iostream>

int main(int args, char **argv)
{
    // Declare variable for name, and use cin to get it from user input.
    std::string name;

    std::cout << "What is your name?" << std::endl;
    std::cin >> name;

    // Initiate the random number generator's seed value.
    srand(static_cast<unsigned int>(time(0)));

    // Set the random number.
    int number = (rand() % 100) + 1;
    int tries = 0;

    int input;
    // Loop that handles game logic.
    do
    {
        // Print out the query, increment the tries, and take the user
        // input again.
        std::cout << "Guess a number." << std::endl;
        tries++;
        std::cin >> input;
        if (input < number)
        {
            std::cout << "Too low." << std::endl;
            continue;
        }
        std::cout << "Too high!" << std::endl;
    } while (input != number);

    // Print the congratulations.
    std::cout << "Congratulations, " << name << "!"
              << " You tried " << tries << " times." << std::endl;
}