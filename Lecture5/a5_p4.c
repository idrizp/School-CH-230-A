/*
    CH-230-A
    a5_p4.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>

void divby5(float arr[], int size)
{
    // Go through the array and divide by 5.
    for (int i = 0; i < size; i++)
    {
        arr[i] /= 5;
    }
}

int main(int argc, char *argv[])
{
    // Read the number of elements we want
    int n;
    scanf("%d", &n);

    // Dynamically allocate the array
    float *arr = (float *)malloc(sizeof(float) * n);

    // Ensure we get the pointer, if not, we exit
    if (arr == NULL)
    {
        printf("Couldn't allocate float array.");
        exit(1);
    }

    // Get the elements from user input
    for (int i = 0; i < n; i++)
    {
        scanf("%f", arr + i);
    }

    printf("Before:\n");
    // The array has n elements, loop through and print the elements before.
    for (int i = 0; i < n; i++)
    {
        printf("%.3f ", *(arr + i));
    }

    // Call the function and print the array once more to show the changes.
    divby5(arr, n);

    printf("\nAfter:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%.3f ", *(arr + i));
    }
    printf("\n");
    free(arr);
    return 0;
}