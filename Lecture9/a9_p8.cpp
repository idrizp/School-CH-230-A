/*
    CH-230-A
    a9_p8.cpp
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <iostream>

// Function to subtract the maximum element from all the elements in the
// array.
void subtract_max(int a[], int dim)
{
    // Find max first
    int max = a[0];
    for (int i = 0; i < dim; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    // Subtract the max from all the elements of the array.
    for (int i = 0; i < dim; i++)
    {
        a[i] -= max;
    }
}

// Deallocates the provided dynamically allocated array.
void deallocate(int a[])
{
    delete[] a;
}

int main(int argc, char **argv)
{
    // Take the number of elements from user input
    int n;
    std::cin >> n;

    // Dynamically allocate array
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> a[i];
    }

    // Call subtract max
    subtract_max(a, n);

    // Print out the result
    std::cout << "Result:" << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cout << a[i] << std::endl;
    }

    // Deallocate the array
    deallocate(a);
    return 0;
}