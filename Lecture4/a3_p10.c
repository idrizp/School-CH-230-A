/*
    CH-230-A
    a3_p10.c
    Idriz Pelaj
    ipelaj@jacobs-university.de
*/

#include <stdio.h>

float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);

int main()
{
    // We first declare the variables and read the data from user input
    float a;
    float b;
    scanf("%f", &a);
    scanf("%f", &b);

    // We declare a float p.
    float p;

    /*
        Both results here will be the same.
        product will multiply a and b and return the new result.
        productbyref will initialize the variable p with a * b.
    */
    printf("Product by product: %f\n", product(a, b));
    productbyref(a, b, &p);
    printf("Product by productbyref: %f\n", p);

    /*
        Here we want to emphasize what happens before and after we call modifybyref.
        Before we call modifybyref, a and b retain their original input values
        But after we do this, a and b are modified.
        This is because we've modified the data at their respective memory addresses
    */
    printf("a before modifybyref: %f\n", a);
    printf("b before modifybyref: %f\n", b);

    modifybyref(&a, &b);

    printf("a after modifybyref: %f\n", a);
    printf("b after modifybyref: %f\n", b);

    return 0;
}

float product(float a, float b)
{
    // Return the product of a and b
    return a * b;
}

void productbyref(float a, float b, float *p)
{
    // Set the data at the memory address of p to be a * b.
    *p = a * b;
}

void modifybyref(float *a, float *b)
{
    // Increment the data at the memory address of a by three, and b by 11 respectively.
    *a += 3;
    *b += 11;
}