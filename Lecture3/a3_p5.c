/*
    CH-230-A
    a3_p5.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

// Converts from celcius to fahrenheit
double convert_to_fahrenheit(double celcius)
{
    return (9 * celcius) / 5 + 32;
}

// Sums up all the temperatures in the temperatures array
double sum_temperatures(double temperatures[], int dimension)
{
    // We start with an initial sum of zero, then we loop
    // and add every element in the temperatures array
    // respectively
    double sum = 0;
    for (int i = 0; i < dimension; i++)
    {
        sum += temperatures[i];
    }
    return sum;
}

// Gets the arithmetic mean of the temperatures array
double calculate_mean(double temperatures[], int dimension)
{
    // The arithmetic mean is just the sum of all the elements
    // divided by the number of elements
    return sum_temperatures(temperatures, dimension) / dimension;
}

// Prints all the temperatures to the screen
void print_temperatures(double temperatures[], int dimension)
{
    for (int i = 0; i < dimension; i++)
    {
        printf("%lf\n", temperatures[i]);
    }
}

// Prints all the temperatures as fahrenheit to the screen
void print_as_fahrenheit(double temperatures[], int dimension)
{
    for (int i = 0; i < dimension; i++)
    {
        printf("%lf\n", convert_to_fahrenheit(temperatures[i]));
    }
}

int main()
{
    // We get the option c
    char c;
    scanf("%c", &c);
    getchar();

    // We get the number of elements n.
    int n;
    scanf("%d", &n);

    double temperatures[n];

    // We now get every temperature value from input
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &temperatures[i]);
    }

    double sum = sum_temperatures(temperatures, n);
    double mean = calculate_mean(temperatures, n);

    switch (c)
    {
    // s: Sum of temperatures
    // t: print temperatures as fahrenheit
    // p: print the temperatures
    // anything else: the arithmetic mean
    case 's':
        printf("The sum of the temperatures is: %lf\n", sum);
        break;
    case 't':
        print_as_fahrenheit(temperatures, n);
        break;
    case 'p':
        print_temperatures(temperatures, n);
        break;
    default:
        printf("The arithmetic mean of the temperatures is: %lf\n", mean);
        break;
    }
    return 0;
}