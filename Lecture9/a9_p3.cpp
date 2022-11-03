/*
    CH-230-A
    a9_p3.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/
#include <iostream>

// Function to get absolute value.
float absolute(float x)
{
    return x < 0 ? -x : x;
}

int main(int args, char **argv)
{
    // Print out two values, -32.5 and 32.5 and see that the output is the
    // same in both cases(32.5), a is expected for absolute values.
    float number = 32.5;
    std::cout << absolute(-number) << std::endl;
    std::cout << absolute(number) << std::endl;
}