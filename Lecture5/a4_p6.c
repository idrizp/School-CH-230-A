/*
    CH-230-A
    a4_p6.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int max_value(int arr[], int dim)
{
    // Get the maximum value by looping
    // through the array and populating
    // the max value
    int max = arr[0];
    for (int i = 1; i < dim; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int min_value(int arr[], int dim)
{
    // Get the minimum value by looping
    // through the array and populating
    // the max value
    int min = arr[0];
    for (int i = 1; i < dim; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main()
{
    // Get the number of elements we want
    unsigned int n;
    scanf("%d", &n);

    // Allocate the array
    int *arr = (int *)malloc(sizeof(int) * n);

    // Populate the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Print the results
    printf("min: %d\n", min_value(arr, n));
    printf("max: %d\n", max_value(arr, n));

    // Free the memory used by the array
    free(arr);
    return 0;
}