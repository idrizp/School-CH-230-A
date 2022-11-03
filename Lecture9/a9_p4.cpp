/*
    CH-230-A
    a9_p4.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/
#include <iostream>

int mycount(int a, int b);
int mycount(char a, std::string b);

// Define mycount function for integer parameters.
int mycount(int a, int b)
{
    return b - a;
}

// Define mycount function for character and string parameter, which
// overloads mycount which has two integers as parameters.
int mycount(char a, std::string b)
{
    // Go through each character, check if we match, and increment.
    int count = 0;
    for (unsigned int i = 0; i < b.size(); i++)
    {
        if (b.at(i) == a)
        {
            count++;
        }
    }
    return count;
}

int main(int args, char **argv)
{
    // Print out the example cases.
    std::cout << mycount(7, 3) << std::endl;
    std::cout << mycount('i', "this is a string") << std::endl;
    std::cout << mycount('x', "this is a string") << std::endl;
}