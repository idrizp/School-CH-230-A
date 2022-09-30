/*
    CH-230-A
    a4_p9.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdlib.h>
#include <stdio.h>

int prodminmax(int arr[], int n)
{
    // Get the smallest element by value
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    // Get the highest element by value
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    // Multiply them
    return min * max;
}

int main()
{
    int n = -1;
    while (n < 1)
    {
        // Make sure the n is a natural number.
        scanf("%d", &n);
    }
    // Dynamically allocate the array and check if the pointer is null
    int *arr = (int *)malloc(sizeof(int) * n);
    if (arr == NULL)
    {
        printf("Couldn't allocate memory for array.\n");
        exit(1);
    }
    // Get all the numbers from the user
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr + i);
    }
    printf("Product: %d\n", prodminmax(arr, n));

    // Finally, free the memory used up by the array.
    free(arr);
    return 0;
}