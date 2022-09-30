/*
    CH-230-A
    a4_p10.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb)
{
    // Replace the value at the references appropriately
    *prod = a * b;
    *div = a / b;
    *pwr = pow(a, b);
    *invb = 1 / b;
}

int main()
{
    // Read the floats we want to operate with
    float a = 0;
    float b = 0;
    scanf("%f", &a);
    scanf("%f", &b);

    // Declare the floats we want populated
    float prod, div, pwr, invb = 0;

    // Call the function which populates the floats
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);

    // Print the values out
    printf("prod=%f\n", prod);
    printf("div=%f\n", div);
    printf("pwr=%f\n", pwr);
    printf("invb=%f\n", invb);
    return 0;
}