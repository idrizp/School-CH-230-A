/*
    CH-230-A
    a5_p2.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/
#include <stdio.h>

void divby5(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] /= 5;
    }
}

int main(int argc, char *argv[])
{
    // Declare the array.
    float arr[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    printf("Before:\n");

    // The array has six elements, loop through and print the elements before.
    for (int i = 0; i < 6; i++)
    {
        printf("%.3f ", arr[i]);
    }

    // Call the function and print the array once more to show the changes.
    divby5(arr, 6);

    printf("\nAfter:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("%.3f ", arr[i]);
    }
    printf("\n");
    return 0;
}