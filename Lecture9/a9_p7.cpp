/*
    CH-230-A
    a9_p7.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <iostream>

// Swapping method that takes two integer references and swaps them.
void swapping(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

// Swapping method that takes two float references and swaps them.
void swapping(float &a, float &b)
{
    float c = a;
    a = b;
    b = c;
}

// Swapping method that takes two character pointer references and swaps
// them.
void swapping(const char *&a, const char *&b)
{
    const char *c = a;
    a = b;
    b = c;
}

int main(int argc, char **argv)
{
    // Code fragment
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    std::cout << "a=" << a << ", b=" << b << std::endl;
    std::cout << "x=" << x << ", y=" << y << std::endl;
    std::cout << "str1=" << str1 << ", str2=" << str2 << std::endl;

    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    std::cout << "a=" << a << ", b=" << b << std::endl;
    std::cout << "x=" << x << ", y=" << y << std::endl;
    std::cout << "str1=" << str1 << ", str2=" << str2 << std::endl;

    return 0;
}