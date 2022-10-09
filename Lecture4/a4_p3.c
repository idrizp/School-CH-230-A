/*
    CH-230-A
    a4_p3.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

float geometric_mean(float arr[], int num)
{
    // We loop through each element from index 1 upwards
    // and multiply to the product
    int product = arr[0];
    for (int i = 1; i < num; i++)
    {
        product *= arr[i];
    }

    // We raise product to the power of 1/num.
    return pow(product, (double)1 / num);
}

float minimum(float arr[], int num)
{
    /*
        Start with arr[0] as the result,
        We then loop through each element and compare to the result,
        If it's smaller, we replace the result with the found number, and in the end, we return the result.
    */
    int result = arr[0];
    for (int i = 1; i < num; i++)
    {
        int number = arr[i];
        if (number < result)
        {
            result = number;
        }
    }
    return result;
}

float maximum(float arr[], int num)
{
    /*
        Start with arr[0] as the result,
        We then loop through each element and compare to the result,
        If it's greater, we replace the result with the found number, and in the end, we return the result.
    */
    int result = arr[0];
    for (int i = 1; i < num; i++)
    {
        int number = arr[i];
        if (number > result)
        {
            result = number;
        }
    }
    return result;
}

float sum_array(float arr[], int num)
{
    // Loop through the array and iteratively add each element to sum
    int sum = 0;
    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    /*
        Declare an array of maximum 15 elements and
        create a loop that will get the elements needed and
        terminate if the input is a negative number
    */
    float arr[15];
    int length = 0;
    for (int i = 0; i < 15; i++, length++)
    {
        float input;
        scanf("%f", &input);
        if (input < 0)
        {
            break;
        }
        arr[i] = input;
    }

    // Get the mode of the program from user input
    char mode;
    getchar();
    scanf("%c", &mode);

    /*
        Compute the sum, minimum value of the array,
        maximum value of the array and the geometric mean.
    */
    float sum = sum_array(arr, length);
    float min = minimum(arr, length);
    float max = maximum(arr, length);
    float mean = geometric_mean(arr, length);

    // We use the switch statement to get the corresponding mode.
    // m - geometric mean
    // h - highest number in array
    // l - lowest number in array
    // s - sum of numbers in array

    switch (mode)
    {
    case 'm':
        printf("Geometric mean is %f\n", mean);
        break;
    case 'h':
        printf("Maximum number in array is %f\n", max);
        break;
    case 'l':
        printf("Minimum number in array is %f\n", min);
        break;
    case 's':
        printf("The sum of the elements in the array is: %f\n", sum);
        break;
    default:
        break;
    }

    return 0;
}