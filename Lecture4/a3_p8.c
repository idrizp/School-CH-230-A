/*
    CH-230-A
    a3_p8.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

// Function to sum up the elements of the array.
float sum_elements(float arr[], float dimension)
{
    // We declare a sum variable and keep adding to it while looping
    // through the array.
    float sum = 0;
    for (int i = 0; i < dimension; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// Function to get the average of the elements of the array.
float average_elements(float arr[], float dimension)
{
    // The average is simply the sum of the elements divided by the number of
    // elements.
    return sum_elements(arr, dimension) / dimension;
}

int main()
{
    int dimension = 0;
    int number_of_floats = 10;

    float arr[number_of_floats];

    // We increment the integer array to go up the number of floats.
    // However, we aren't guaranteed number_of_floats elements,
    // so we add a dimension counter as well that we increment at the same pace.
    for (int i = 0; i < number_of_floats; i++, dimension++)
    {
        float current_float;
        scanf("%f", &current_float);
        if (current_float == -99.0)
        {
            // we stop the loop once we hit the number -99.
            break;
        }
        // If the float is not -99.0, we place it in the array.
        arr[i] = current_float;
    }

    // We sum and average the elements, providing the real dimension of the array
    // which may not be number_of_floats.
    float sum = sum_elements(arr, dimension);
    float average = average_elements(arr, dimension);

    // We print the results.
    printf("The sum is: %f\n", sum);
    printf("The average is: %f\n", average);
    return 0;
}