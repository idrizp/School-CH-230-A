/*
    CH-230-A
    a9_p2.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/
#include <iostream>

int main(int args, char **argv)
{
    // Define the variables
    int n;
    double x;
    std::string s;

    // Read input
    std::cin >> n;
    std::cin >> x;
    std::cin >> s;

    for (int i = 0; i < n; i++)
    {
        std::cout << s << ":" << x << std::endl;
    }
}