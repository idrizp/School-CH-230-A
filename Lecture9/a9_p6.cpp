/*
    CH-230-A
    a9_p6.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <iostream>

// Declare function for myfirst which returns an integer.
int myfirst(int arr[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        if (arr[i] > 0 && arr[i] % 2 == 0)
        {
            return arr[i];
        }
    }
    return -1;
}

// Overloaded function myfirst, that returns a double.
double myfirst(double arr[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        if (arr[i] < 0 && static_cast<int>(arr[i]) == arr[i])
        {
            return arr[i];
        }
    }
    return -1.1;
}

// Overloaded function myfirst, that returns a char.
char myfirst(char arr[], int dim)
{
    for (int i = 0; i < dim; i++)
    {
        char c = tolower(arr[i]);
        // Check if we have a consonant.
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
              c == 'y'))
        {
            return arr[i];
        }
    }
    return '0';
}

int main(int argc, char **argv)
{
    // Define some test arrays.
    char char_array[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
    int int_array[] = {1, 2, 3, -5, 6, 7};
    double double_array[] = {2, -4, 5, 3, 5};

    // Print out the results.
    std::cout << myfirst(char_array, 7) << std::endl;
    std::cout << myfirst(int_array, 6) << std::endl;
    std::cout << myfirst(double_array, 5) << std::endl;
}